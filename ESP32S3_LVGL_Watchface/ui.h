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
extern lv_obj_t *ui_Watchface;
extern lv_obj_t *ui_Anchor0;
extern lv_obj_t *ui_Anchor1;
extern lv_obj_t *ui_Anchor2;
extern lv_obj_t *ui_Anchor3;
extern lv_obj_t *ui_Anchor4;
extern lv_obj_t *ui_Anchor5;
extern lv_obj_t *ui_Anchor6;
extern lv_obj_t *ui_Anchor7;
extern lv_obj_t *ui_Anchor8;
extern lv_obj_t *ui_Anchor9;
extern lv_obj_t *ui_LabelWeekday;
extern lv_obj_t *ui_LabelDate;
extern lv_obj_t *ui_ImageArmHour;
extern lv_obj_t *ui_ImageArmMinute;
extern lv_obj_t *ui_ImageArmSecond;
extern lv_obj_t *ui_LabelLongDate;


LV_IMG_DECLARE( ui_img_watchface_png);   // assets/watchface.png
LV_IMG_DECLARE( ui_img_out01_png);   // assets/out01.png
LV_IMG_DECLARE( ui_img_out02_png);   // assets/out02.png
LV_IMG_DECLARE( ui_img_out03_png);   // assets/out03.png
LV_IMG_DECLARE( ui_img_out04_png);   // assets/out04.png
LV_IMG_DECLARE( ui_img_out05_png);   // assets/out05.png
LV_IMG_DECLARE( ui_img_out06_png);   // assets/out06.png
LV_IMG_DECLARE( ui_img_out07_png);   // assets/out07.png
LV_IMG_DECLARE( ui_img_out08_png);   // assets/out08.png
LV_IMG_DECLARE( ui_img_out09_png);   // assets/out09.png
LV_IMG_DECLARE( ui_img_out10_png);   // assets/out10.png
LV_IMG_DECLARE( ui_img_arm_hour_png);   // assets/arm_hour.png
LV_IMG_DECLARE( ui_img_arm_minute_png);   // assets/arm_minute.png
LV_IMG_DECLARE( ui_img_arm_second_png);   // assets/arm_second.png


LV_FONT_DECLARE( ui_font_SansDate);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
