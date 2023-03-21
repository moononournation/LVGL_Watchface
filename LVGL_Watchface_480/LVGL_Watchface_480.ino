/*******************************************************************************
 * LVGL Watchface
 *
 * Anchor escapement video source:
 * https://www.youtube.com/watch?v=Nu5Xe51Q_oE
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

const char *ssid = "YourAP";
const char *password = "PleaseInputYourPasswordHere";

const char *ntpServer1 = "pool.ntp.org";
const char *ntpServer2 = "time.nist.gov";
const long gmtOffset_sec = (8 * 60 * 60);
const int daylightOffset_sec = 0;

#include <WiFi.h>
#include <time.h>
#include <sntp.h>

#include <lvgl.h>
#include "ui.h"

/*******************************************************************************
 * Start of Arduino_GFX setting
 ******************************************************************************/
#include <Arduino_GFX_Library.h>
/* More data bus class: https://github.com/moononournation/Arduino_GFX/wiki/Data-Bus-Class */
/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */

// ESP32S3-2.1-TP
#define GFX_BL 38
Arduino_DataBus *bus = new Arduino_SWSPI(
    GFX_NOT_DEFINED /* DC */, 39 /* CS */,
    48 /* SCK */, 47 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
    18 /* DE */, 17 /* VSYNC */, 16 /* HSYNC */, 21 /* PCLK */,
    4 /* R0 */, 5 /* R1 */, 6 /* R2 */, 7 /* R3 */, 15 /* R4 */,
    8 /* G0 */, 20 /* G1 */, 3 /* G2 */, 46 /* G3 */, 9 /* G4 */, 10 /* G5 */,
    11 /* B0 */, 12 /* B1 */, 13 /* B2 */, 14 /* B3 */, 0 /* B4 */,
    1 /* hsync_polarity */, 10 /* hsync_front_porch */, 8 /* hsync_pulse_width */, 50 /* hsync_back_porch */,
    1 /* vsync_polarity */, 10 /* vsync_front_porch */, 8 /* vsync_pulse_width */, 20 /* vsync_back_porch */);
Arduino_RGB_Display *gfx = new Arduino_RGB_Display(
    480 /* width */, 480 /* height */, rgbpanel, 0 /* rotation */, true /* auto_flush */,
    bus, GFX_NOT_DEFINED /* RST */, st7701_type5_init_operations, sizeof(st7701_type5_init_operations));

// LILYGO T-RGB
// #include <Wire.h>
// #define GFX_EXTRA_PRE_INIT() { Wire.begin(8 /* SDA */, 48 /* SCL */, 800000L /* speed */); }
// #define GFX_BL 46
// Arduino_DataBus *bus = new Arduino_XL9535SWSPI(8 /* SDA */, 48 /* SCL */, 2 /* XL PWD */, 3 /* XL CS */, 5 /* XL SCK */, 4 /* XL MOSI */);
// Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
//     45 /* DE */, 41 /* VSYNC */, 47 /* HSYNC */, 42 /* PCLK */,
//     21 /* R0 */, 18 /* R1 */, 17 /* R2 */, 46 /* R3 */, 15 /* R4 */,
//     14 /* G0 */, 13 /* G1 */, 12 /* G2 */, 11 /* G3 */, 10 /* G4 */, 9 /* G5 */,
//     7 /* B0 */, 6 /* B1 */, 5 /* B2 */, 3 /* B3 */, 2 /* B4 */,
//     1 /* hsync_polarity */, 50 /* hsync_front_porch */, 1 /* hsync_pulse_width */, 30 /* hsync_back_porch */,
//     1 /* vsync_polarity */, 20 /* vsync_front_porch */, 1 /* vsync_pulse_width */, 30 /* vsync_back_porch */,
//     1 /* pclk_active_neg */);
// Arduino_RGB_Display *gfx = new Arduino_RGB_Display(
//     480 /* width */, 480 /* height */, rgbpanel, 0 /* rotation */, true /* auto_flush */,
//     bus, GFX_NOT_DEFINED /* RST */, st7701_type4_init_operations, sizeof(st7701_type4_init_operations));

// ZX2D10GE01R-V4848
// #define GFX_BL 38
// Arduino_DataBus *bus = new Arduino_SWSPI(
//     GFX_NOT_DEFINED /* DC */, 21 /* CS */,
//     47 /* SCK */, 41 /* MOSI */, GFX_NOT_DEFINED /* MISO */);
// Arduino_ESP32RGBPanel *rgbpanel = new Arduino_ESP32RGBPanel(
//     39 /* DE */, 48 /* VSYNC */, 40 /* HSYNC */, 45 /* PCLK */,
//     10 /* R0 */, 16 /* R1 */, 9 /* R2 */, 15 /* R3 */, 46 /* R4 */,
//     8 /* G0 */, 13 /* G1 */, 18 /* G2 */, 12 /* G3 */, 11 /* G4 */, 17 /* G5 */,
//     47 /* B0 */, 41 /* B1 */, 0 /* B2 */, 42 /* B3 */, 14 /* B4 */,
//     1 /* hsync_polarity */, 10 /* hsync_front_porch */, 10 /* hsync_pulse_width */, 10 /* hsync_back_porch */,
//     1 /* vsync_polarity */, 14 /* vsync_front_porch */, 2 /* vsync_pulse_width */, 12 /* vsync_back_porch */);
// Arduino_RGB_Display *gfx = new Arduino_RGB_Display(
//     480 /* width */, 480 /* height */, rgbpanel, 0 /* rotation */, true /* auto_flush */,
//     bus, GFX_NOT_DEFINED /* RST */, st7701_type7_init_operations, sizeof(st7701_type7_init_operations));
/*******************************************************************************
 * End of Arduino_GFX setting
 ******************************************************************************/

const char *month_str[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};

const char *weekday_str[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"};

const char *weekday_chi_str[] = {
    "星期日",
    "星期一",
    "星期二",
    "星期三",
    "星期四",
    "星期五",
    "星期六"};

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;
static char str_buf[40]; // sprintf string buffer

static uint8_t curr_anchor_idx = 0;
static int16_t curr_anchor_angle = 0;
static lv_obj_t *anchors[10];
static unsigned long anchor_next_frame_ms;
#define ANCHOR_FPS 30

static bool ntpGotTime = false;
static struct tm timeinfo;
static unsigned long next_get_timeinfo;
static unsigned long last_second_angle = 999;
static int last_display_mday = -1;

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
  getLocalTime(&timeinfo);
  next_get_timeinfo = ((millis() / 1000) + 1 + (60 - timeinfo.tm_sec)) * 1000;

  log_v("next_get_timeinfo: %d", next_get_timeinfo);
}

// Callback function (get's called when time adjusts via NTP)
void timeavailable(struct timeval *t)
{
  log_v("Got time adjustment from NTP!");

  ntpGotTime = true;
  calculate_next_get_timeinfo();

  lv_obj_clear_flag(ui_ImageArmSecond, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(ui_ImageArmMinute, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(ui_ImageArmHour, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(ui_LabelWeekday, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(ui_LabelDate, LV_OBJ_FLAG_HIDDEN);
  lv_obj_clear_flag(ui_LabelLongDate, LV_OBJ_FLAG_HIDDEN);
}

void setup()
{
  // set notification call-back function
  sntp_set_time_sync_notification_cb(timeavailable);

  /**
   * NTP server address could be aquired via DHCP,
   *
   * NOTE: This call should be made BEFORE esp32 aquires IP address via DHCP,
   * otherwise SNTP option 42 would be rejected by default.
   * NOTE: configTime() function call if made AFTER DHCP-client run
   * will OVERRIDE aquired NTP server address
   */
  sntp_servermode_dhcp(1); // (optional)

  /**
   * This will set configured ntp servers and constant TimeZone/daylightOffset
   * should be OK if your time zone does not need to adjust daylightOffset twice a year,
   * in such a case time adjustment won't be handled automagicaly.
   */
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer1, ntpServer2);

  // Init WiFi
  WiFi.begin(ssid, password);

#ifdef GFX_EXTRA_PRE_INIT
  GFX_EXTRA_PRE_INIT();
#endif

  // Init Display
  gfx->begin();
  gfx->fillScreen(BLACK);

#ifdef GFX_BL
  // pinMode(GFX_BL, OUTPUT);
  // digitalWrite(GFX_BL, HIGH);
  ledcSetup(0 /* LEDChannel */, 5000 /* freq */, 8 /* resolution */);
  ledcAttachPin(GFX_BL, 0 /* LEDChannel */);
  ledcWrite(0 /* LEDChannel */, 127); /* 0-255 */
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
    log_e("LVGL disp_draw_buf allocate failed!");
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
    anchors[0] = ui_Anchor0;
    anchors[1] = ui_Anchor1;
    anchors[2] = ui_Anchor2;
    anchors[3] = ui_Anchor3;
    anchors[4] = ui_Anchor4;
    anchors[5] = ui_Anchor5;
    anchors[6] = ui_Anchor6;
    anchors[7] = ui_Anchor7;
    anchors[8] = ui_Anchor8;
    anchors[9] = ui_Anchor9;

    log_v("Setup done");
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
    if (next_anchor_idx > 9)
    {
      next_anchor_idx = 0;
      // rotate 2.4 degrees for each 10 images loop
      curr_anchor_angle += 24;

      if (curr_anchor_angle >= 3600)
      {
        curr_anchor_angle = 0;
      }
    }

    // rotate and show next image then hide current image
    lv_img_set_angle(anchors[next_anchor_idx], curr_anchor_angle);
    lv_obj_clear_flag(anchors[next_anchor_idx], LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(anchors[curr_anchor_idx], LV_OBJ_FLAG_HIDDEN);

    curr_anchor_idx = next_anchor_idx;
    anchor_next_frame_ms += (1000 / ANCHOR_FPS);
  }

  if (ntpGotTime)
  {
    // call getLocalTime() every minute
    if (ms >= next_get_timeinfo)
    {
      getLocalTime(&timeinfo);

      // detect time drifted
      if (timeinfo.tm_sec > 1)
      {
        calculate_next_get_timeinfo();
      }
      else
      {
        next_get_timeinfo += 60000;
        log_v("next_get_timeinfo: %d", next_get_timeinfo);
      }
    }

    // set watch arms' angle
    int16_t angle = (millis() + 60000 - next_get_timeinfo) * 3600 / 60000;
    if (last_second_angle != angle)
    {
      lv_img_set_angle(ui_ImageArmSecond, angle);
      angle = (angle + (timeinfo.tm_min * 3600)) / 60;
      lv_img_set_angle(ui_ImageArmMinute, angle);
      angle = (angle + (timeinfo.tm_hour * 3600)) / 12;
      lv_img_set_angle(ui_ImageArmHour, angle);

      last_second_angle = angle;
    }

    // set labels' text
    if (last_display_mday != timeinfo.tm_mday)
    {
      sprintf(str_buf, "%d", timeinfo.tm_mday);
      lv_label_set_text(ui_LabelDate, str_buf);
      lv_label_set_text(ui_LabelWeekday, weekday_chi_str[timeinfo.tm_wday]);
      sprintf(str_buf, "%d %s %d, %s", 1900 + timeinfo.tm_year, month_str[timeinfo.tm_mon], timeinfo.tm_mday, weekday_str[timeinfo.tm_wday]);
      lv_label_set_text(ui_LabelLongDate, str_buf);

      last_display_mday = timeinfo.tm_mday;
    }
  }
}
