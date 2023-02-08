/*******************************************************************************
 * LVGL Watchface
 *
 * GIF animation from:
 * https://gifer.com/en/79K5
 *
 * Image by macrovector on Freepik:
 * https://www.freepik.com/free-vector/watch-set-expensive-classic-clock-with-leather-metal-straps-illustration_13031503.htm
 *
 * Dependent libraries:
 * PCF8563_Class: https://github.com/lewisxhe/PCF8563_Library.git
 * LVGL: https://github.com/lvgl/lvgl.git
 *
 * LVGL Configuration file:
 * Copy your_arduino_path/libraries/lvgl/lv_conf_template.h
 * to your_arduino_path/libraries/lv_conf.h
 *
 * In lv_conf.h around line 15, enable config file:
 * #if 1 // Set it to "1" to enable content
 *
 * Then find and set:
 * #define LV_COLOR_DEPTH     16
 * #define LV_TICK_CUSTOM     1
 *
 * Disable color swap
 * #define LV_COLOR_16_SWAP   0
 *
 * Disable GIF decoder library
 * #define LV_USE_GIF 0
 ******************************************************************************/
#include <lvgl.h>
#include "ui.h"

#define GIF_FILENAME "/79K5240.gif"

/*******************************************************************************
 * Start of Arduino_GFX setting
 ******************************************************************************/
#include <Arduino_GFX_Library.h>
#define GFX_BL 21
Arduino_DataBus *bus = new Arduino_ESP32SPI(19 /* DC */, 15 /* CS */, 14 /* SCK */, 13 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_GFX *gfx = new Arduino_GC9A01(bus, 27 /* RST */, 0 /* rotation */, true /* IPS */);
/*******************************************************************************
 * End of Arduino_GFX setting
 ******************************************************************************/

#include <LittleFS.h>

#include "GifClass.h"
static GifClass gifClass;
static File gifFile;
static gd_GIF *gif;
static uint8_t *buf;
static lv_color_t *cbuf;
static unsigned long next_frame_ms;
static uint32_t buffer_size;

const char *weekday_str[] = {
    "Sun",
    "Mon",
    "Tue",
    "Wed",
    "Thu",
    "Fri",
    "Sat"};

#include "pcf8563.h"
PCF8563_Class rtc;

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;

static RTC_Date rtcTime;
static unsigned long next_get_timeinfo;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

void my_log_cb(const char *buf)
{
  Serial.println(buf);
}

void calculate_next_get_timeinfo()
{
  rtcTime = rtc.getDateTime();
  next_get_timeinfo = ((millis() / 1000) + 1 + (60 - rtcTime.second)) * 1000;

  Serial.printf("next_get_timeinfo: %d\n", next_get_timeinfo);
}

void setup()
{
  Serial.begin(115200);
  // Serial.setDebugOutput(true);
  // while(!Serial);
  Serial.println("LVGL Watchface");

#ifdef GFX_EXTRA_PRE_INIT
  GFX_EXTRA_PRE_INIT();
#endif

  // Init Display
  gfx->begin(80000000);
  gfx->fillScreen(BLACK);

#ifdef GFX_BL
  // pinMode(GFX_BL, OUTPUT);
  // digitalWrite(GFX_BL, HIGH);
  ledcSetup(0 /* LEDChannel */, 12000 /* freq */, 8 /* resolution */);
  ledcAttachPin(GFX_BL, 0 /* LEDChannel */);
  ledcWrite(0 /* LEDChannel */, 191); /* 0-255 */
#endif

  // Init RTC
  Wire.begin(26, 25);
  rtc.begin();

  if (!LittleFS.begin())
  {
    Serial.println(F("ERROR: File System Mount Failed!"));
    gfx->println(F("ERROR: File System Mount Failed!"));
    exit(0);
  }
  else
  {
    gifFile = LittleFS.open(GIF_FILENAME, "r");
    if (!gifFile || gifFile.isDirectory())
    {
      Serial.println(F("ERROR: open gifFile Failed!"));
      gfx->println(F("ERROR: open gifFile Failed!"));
    }
    else
    {
      // read GIF file header
      gif = gifClass.gd_open_gif(&gifFile);
      if (!gif)
      {
        Serial.println(F("gd_open_gif() failed!"));
      }
      else
      {
        buffer_size = gif->width * gif->height;
        buf = (uint8_t *)malloc(buffer_size);
        if (!buf)
        {
          Serial.println(F("buf malloc failed!"));
        }
        else
        {
          cbuf = (lv_color_t *)malloc(buffer_size * 2);
          if (!cbuf)
          {
            Serial.println(F("cbuf malloc failed!"));
          }
        }
      }
    }
  }

#if LV_USE_LOG
  lv_log_register_print_cb(my_log_cb);
#endif

  lv_init();

  screenWidth = gfx->width();
  screenHeight = gfx->height();
#ifdef ESP32
  disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 32, MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
#else
  disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 32);
#endif
  if (!disp_draw_buf)
  {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  }
  else
  {
    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * 32);

    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the (dummy) input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    lv_indev_drv_register(&indev_drv);

    /* Init SquareLine prepared UI */
    ui_init();

    // In ui.c, replace "ui_Image1 = lv_gif_create(ui_Screen1);" to "ui_Image1 = lv_canvas_create(ui_Screen1);"
    lv_canvas_set_buffer(ui_Image1, cbuf, gif->width, gif->height, LV_IMG_CF_TRUE_COLOR);
    lv_obj_set_width(ui_Image1, gif->width);
    lv_obj_set_height(ui_Image1, gif->height);

    Serial.println("Setup done");
    next_frame_ms = millis();
  }
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */

  unsigned long ms = millis();

  // handle ms overflow, over 49.71 days
  if (ms < 200)
  {
    calculate_next_get_timeinfo();
  }

  // call getLocalTime() every minute
  if (ms >= next_get_timeinfo)
  {
    rtcTime = rtc.getDateTime();

    // detect time drifted
    if (rtcTime.second > 1)
    {
      calculate_next_get_timeinfo();
    }
    else
    {
      next_get_timeinfo += 60000;

      Serial.printf("next_get_timeinfo: %d\n", next_get_timeinfo);
    }
  }

  // set watch arms' angle
  int16_t angle = (millis() + 60000 - next_get_timeinfo) * 3600 / 60000;
  lv_img_set_angle(ui_ImageArmSecond, angle);
  angle = (angle + (rtcTime.minute * 3600)) / 60;
  lv_img_set_angle(ui_ImageArmMinute, angle);
  angle = (angle + (rtcTime.hour * 3600)) / 12;
  lv_img_set_angle(ui_ImageArmHour, angle);

  if (ms >= next_frame_ms)
  {
    next_frame_ms += gif->gce.delay * 10;
    int32_t res = gifClass.gd_get_frame(gif, buf);
    if (res > 0)
    {
      uint32_t l = buffer_size;
      uint8_t *src = buf;
      uint16_t *dst = (uint16_t *)cbuf;
      uint16_t d;
      while (l--)
      {
#if (LV_COLOR_16_SWAP != 0)
        d = gif->palette->colors[*src++];
        MSB_16_SET(*dst++, d);
#else
        *dst++ = gif->palette->colors[*src++];
#endif
      }
      lv_obj_invalidate(ui_Image1);
    }
    else
    {
      gifClass.gd_rewind(gif);
    }
  }
}
