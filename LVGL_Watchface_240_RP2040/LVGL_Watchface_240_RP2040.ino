/*******************************************************************************
 * LVGL Watchface
 *
 * Anchor escapement video source:
 * https://www.youtube.com/watch?v=d_pV8TGKfMc
 *
 * Image by macrovector on Freepik:
 * https://www.freepik.com/free-vector/watch-set-expensive-classic-clock-with-leather-metal-straps-illustration_13031503.htm
 *
 * Dependent libraries:
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
 * For SPI/parallel 8 display set color swap can be faster, parallel 16/RGB screen don't swap!
 * #define LV_COLOR_16_SWAP   1 // for SPI and parallel 8
 * #define LV_COLOR_16_SWAP   0 // for parallel 16 and RGB
 ******************************************************************************/
#include <lvgl.h>
#include "ui.h"

/*******************************************************************************
 * Start of Arduino_GFX setting
 ******************************************************************************/
#include <Arduino_GFX_Library.h>
#define GFX_BL 25
/* More data bus class: https://github.com/moononournation/Arduino_GFX/wiki/Data-Bus-Class */
Arduino_DataBus *bus = new Arduino_RPiPicoSPI(8 /* DC */, 9 /* CS */, 10 /* SCK */, 11 /* MOSI */, 12 /* MISO */, spi1 /* spi */);
/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */
Arduino_GFX *gfx = new Arduino_GC9A01(bus, 12, 0 /* rotation */, true /* IPS */);
/*******************************************************************************
 * End of Arduino_GFX setting
 ******************************************************************************/

// use compile time for demo only
#define ONE_MINUTE_MS (60 * 1000)
#define ONE_HOUR_MS (60 * 60 * 1000)
#define TWELVE_HOUR_MS (12 * 60 * 60 * 1000)
static uint8_t conv2d(const char *p)
{
  uint8_t v = 0;
  return (10 * (*p - '0')) + (*++p - '0');
}
static unsigned long ms_offset;

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;

static uint8_t curr_anchor_idx = 0;
static int16_t curr_anchor_angle = 0;
static lv_obj_t *anchors[8];
static unsigned long anchor_next_frame_ms;
#define ANCHOR_FPS 25

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

void setup()
{
  // use compile time for demo only
  uint8_t hh = conv2d(__TIME__);
  uint8_t mm = conv2d(__TIME__ + 3);
  uint8_t ss = conv2d(__TIME__ + 6);
  ms_offset = ((60 * 60 * hh) + (60 * mm) + ss) * 1000;

  Serial.begin(115200);
  // Serial.setDebugOutput(true);
  // while(!Serial);
  Serial.println("LVGL Watchface");

#ifdef GFX_EXTRA_PRE_INIT
  GFX_EXTRA_PRE_INIT();
#endif

  // Init Display
  gfx->begin();
  gfx->fillScreen(BLACK);

#ifdef GFX_BL
  pinMode(GFX_BL, OUTPUT);
  // digitalWrite(GFX_BL, HIGH);
  analogWrite(GFX_BL, 127);
#endif

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

    /* assign images to array after ui_init() */
    anchors[0] = ui_Image1;
    anchors[1] = ui_Image2;
    anchors[2] = ui_Image3;
    anchors[3] = ui_Image4;
    anchors[4] = ui_Image5;
    anchors[5] = ui_Image6;
    anchors[6] = ui_Image7;
    anchors[7] = ui_Image8;

    Serial.println("Setup done");
  }
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */

  unsigned long ms = millis();

  // handle anchor escapement movement
  if (ms >= anchor_next_frame_ms)
  {
    uint8_t next_anchor_idx = curr_anchor_idx + 1;
    if (next_anchor_idx > 7)
    {
      next_anchor_idx = 0;
    }

    // show next image then hide current image
    lv_obj_clear_flag(anchors[next_anchor_idx], LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(anchors[curr_anchor_idx], LV_OBJ_FLAG_HIDDEN);

    curr_anchor_idx = next_anchor_idx;
    anchor_next_frame_ms += (1000 / ANCHOR_FPS);
  }

  // set watch arms' angle
  unsigned long clock_ms = (ms_offset + ms) % TWELVE_HOUR_MS;
  uint8_t hour = clock_ms / ONE_HOUR_MS;
  uint8_t minute = (clock_ms % ONE_HOUR_MS) / ONE_MINUTE_MS;
  int16_t angle = (clock_ms % ONE_MINUTE_MS) * 3600 / ONE_MINUTE_MS;
  lv_img_set_angle(ui_ImageArmSecond, angle);
  angle = (angle + (minute * 3600)) / 60;
  lv_img_set_angle(ui_ImageArmMinute, angle);
  angle = (angle + (hour * 3600)) / 12;
  lv_img_set_angle(ui_ImageArmHour, angle);
}
