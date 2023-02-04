// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_ImageWatchface;
extern lv_obj_t *ui_ImageArmHour;
extern lv_obj_t *ui_ImageArmMinute;
extern lv_obj_t *ui_ImageArmSecond;


LV_IMG_DECLARE( ui_img_watchface240_png);   // assets/watchface240.png
LV_IMG_DECLARE( ui_img_armhour_png);   // assets/armHour.png
LV_IMG_DECLARE( ui_img_armminute_png);   // assets/armMinute.png
LV_IMG_DECLARE( ui_img_armsecond_png);   // assets/armSecond.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
