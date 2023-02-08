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
#include <Wire.h>
#include "axp20x.h"
#define GFX_EXTRA_PRE_INIT()                       \
  {                                                \
    AXP20X_Class axp;                              \
    Wire.begin(21, 22);                            \
    axp.begin();                                   \
    axp.setStartupTime(AXP202_STARTUP_TIME_128MS); \
    axp.setlongPressTime(0);                       \
    axp.setTimeOutShutdown(true);                  \
    axp.enableChargeing(true);                     \
  }
#define GFX_BL 12
Arduino_DataBus *bus = new Arduino_ESP32SPI(27 /* DC */, 5 /* CS */, 18 /* SCK */, 19 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_GFX *gfx = new Arduino_ST7789(bus, GFX_NOT_DEFINED /* RST */, 0 /* rotation */, true /* IPS */, 240 /* width */, 240 /* height */, 0 /* col offset 1 */, 0 /* row offset 1 */, 0 /* col offset 2 */, 80 /* row offset 2 */);
/*******************************************************************************
 * End of Arduino_GFX setting
 ******************************************************************************/

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
static char str_buf[8]; // sprintf string buffer

static uint8_t curr_anchor_idx = 0;
static int16_t curr_anchor_angle = 0;
static lv_obj_t *anchors[8];
static unsigned long anchor_next_frame_ms;
#define ANCHOR_FPS 25

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

  // Serial.printf("next_get_timeinfo: %d\n", next_get_timeinfo);
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
  ledcWrite(0 /* LEDChannel */, 240); /* 0-255 */
#endif

  // Init RTC
  rtc.begin();

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
    anchor_next_frame_ms = millis() + (1000 / ANCHOR_FPS);
  }
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */

  unsigned long ms = millis();

  // handle ms overflow, over 49.71 days
  if (ms < 200)
  {
    anchor_next_frame_ms = ms;
    calculate_next_get_timeinfo();
  }

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

      // Serial.printf("next_get_timeinfo: %d\n", next_get_timeinfo);
    }

    // set labels' text
    sprintf(str_buf, "%s %d", weekday_str[rtc.getDayOfWeek(rtcTime.day, rtcTime.month, rtcTime.year)], rtcTime.day);
    lv_label_set_text(ui_LabelDate, str_buf);
  }

  // set watch arms' angle
  int16_t angle = (millis() + 60000 - next_get_timeinfo) * 3600 / 60000;
  lv_img_set_angle(ui_ImageArmSecond, angle);
  angle = (angle + (rtcTime.minute * 3600)) / 60;
  lv_img_set_angle(ui_ImageArmMinute, angle);
  angle = (angle + (rtcTime.hour * 3600)) / 12;
  lv_img_set_angle(ui_ImageArmHour, angle);
}
