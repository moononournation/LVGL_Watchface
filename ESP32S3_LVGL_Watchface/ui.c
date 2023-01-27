// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Watchface;
lv_obj_t *ui_Anchor0;
lv_obj_t *ui_Anchor1;
lv_obj_t *ui_Anchor2;
lv_obj_t *ui_Anchor3;
lv_obj_t *ui_Anchor4;
lv_obj_t *ui_Anchor5;
lv_obj_t *ui_Anchor6;
lv_obj_t *ui_Anchor7;
lv_obj_t *ui_Anchor8;
lv_obj_t *ui_Anchor9;
lv_obj_t *ui_LabelWeekday;
lv_obj_t *ui_LabelDate;
lv_obj_t *ui_ImageArmHour;
lv_obj_t *ui_ImageArmMinute;
lv_obj_t *ui_ImageArmSecond;
lv_obj_t *ui_LabelLongDate;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Watchface = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Watchface, &ui_img_watchface_png);
lv_obj_set_width( ui_Watchface, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Watchface, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Watchface, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Watchface, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Watchface, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor0 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor0, &ui_img_out01_png);
lv_obj_set_width( ui_Anchor0, 160);
lv_obj_set_height( ui_Anchor0, 160);
lv_obj_set_x( ui_Anchor0, 0 );
lv_obj_set_y( ui_Anchor0, 145 );
lv_obj_set_align( ui_Anchor0, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor0, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor0, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor1, &ui_img_out02_png);
lv_obj_set_width( ui_Anchor1, 160);
lv_obj_set_height( ui_Anchor1, 160);
lv_obj_set_x( ui_Anchor1, 0 );
lv_obj_set_y( ui_Anchor1, 145 );
lv_obj_set_align( ui_Anchor1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor1, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor2 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor2, &ui_img_out03_png);
lv_obj_set_width( ui_Anchor2, 160);
lv_obj_set_height( ui_Anchor2, 160);
lv_obj_set_x( ui_Anchor2, 0 );
lv_obj_set_y( ui_Anchor2, 145 );
lv_obj_set_align( ui_Anchor2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor3 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor3, &ui_img_out04_png);
lv_obj_set_width( ui_Anchor3, 160);
lv_obj_set_height( ui_Anchor3, 160);
lv_obj_set_x( ui_Anchor3, 0 );
lv_obj_set_y( ui_Anchor3, 145 );
lv_obj_set_align( ui_Anchor3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor4 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor4, &ui_img_out05_png);
lv_obj_set_width( ui_Anchor4, 160);
lv_obj_set_height( ui_Anchor4, 160);
lv_obj_set_x( ui_Anchor4, 0 );
lv_obj_set_y( ui_Anchor4, 145 );
lv_obj_set_align( ui_Anchor4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor5 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor5, &ui_img_out06_png);
lv_obj_set_width( ui_Anchor5, 160);
lv_obj_set_height( ui_Anchor5, 160);
lv_obj_set_x( ui_Anchor5, 0 );
lv_obj_set_y( ui_Anchor5, 145 );
lv_obj_set_align( ui_Anchor5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor6 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor6, &ui_img_out07_png);
lv_obj_set_width( ui_Anchor6, 160);
lv_obj_set_height( ui_Anchor6, 160);
lv_obj_set_x( ui_Anchor6, 0 );
lv_obj_set_y( ui_Anchor6, 145 );
lv_obj_set_align( ui_Anchor6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor6, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor7 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor7, &ui_img_out08_png);
lv_obj_set_width( ui_Anchor7, 160);
lv_obj_set_height( ui_Anchor7, 160);
lv_obj_set_x( ui_Anchor7, 0 );
lv_obj_set_y( ui_Anchor7, 145 );
lv_obj_set_align( ui_Anchor7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor8 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor8, &ui_img_out09_png);
lv_obj_set_width( ui_Anchor8, 160);
lv_obj_set_height( ui_Anchor8, 160);
lv_obj_set_x( ui_Anchor8, 0 );
lv_obj_set_y( ui_Anchor8, 145 );
lv_obj_set_align( ui_Anchor8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor8, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Anchor9 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Anchor9, &ui_img_out10_png);
lv_obj_set_width( ui_Anchor9, 160);
lv_obj_set_height( ui_Anchor9, 160);
lv_obj_set_x( ui_Anchor9, 0 );
lv_obj_set_y( ui_Anchor9, 145 );
lv_obj_set_align( ui_Anchor9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Anchor9, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Anchor9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_LabelWeekday = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_LabelWeekday, 100);
lv_obj_set_height( ui_LabelWeekday, 28);
lv_obj_set_x( ui_LabelWeekday, 103 );
lv_obj_set_y( ui_LabelWeekday, 0 );
lv_obj_set_align( ui_LabelWeekday, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelWeekday,"星期五");
lv_obj_add_flag( ui_LabelWeekday, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_text_color(ui_LabelWeekday, lv_color_hex(0x4C4C4C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelWeekday, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelWeekday, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_LabelWeekday, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelWeekday, &ui_font_SansDate, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_LabelDate = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_LabelDate, 40);
lv_obj_set_height( ui_LabelDate, 28);
lv_obj_set_x( ui_LabelDate, 180 );
lv_obj_set_y( ui_LabelDate, 0 );
lv_obj_set_align( ui_LabelDate, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelDate,"25");
lv_obj_add_flag( ui_LabelDate, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_text_color(ui_LabelDate, lv_color_hex(0x4C4C4C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelDate, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelDate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelDate, &ui_font_SansDate, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ImageArmHour = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmHour, &ui_img_arm_hour_png);
lv_obj_set_width( ui_ImageArmHour, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmHour, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmHour, 0 );
lv_obj_set_y( ui_ImageArmHour, -67 );
lv_obj_set_align( ui_ImageArmHour, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmHour, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmHour, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmHour,19,153);
lv_img_set_angle(ui_ImageArmHour,2950);

ui_ImageArmMinute = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmMinute, &ui_img_arm_minute_png);
lv_obj_set_width( ui_ImageArmMinute, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmMinute, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmMinute, 0 );
lv_obj_set_y( ui_ImageArmMinute, -96 );
lv_obj_set_align( ui_ImageArmMinute, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmMinute, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmMinute, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmMinute,19,210);
lv_img_set_angle(ui_ImageArmMinute,450);

ui_ImageArmSecond = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmSecond, &ui_img_arm_second_png);
lv_obj_set_width( ui_ImageArmSecond, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmSecond, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmSecond, 3 );
lv_obj_set_y( ui_ImageArmSecond, -85 );
lv_obj_set_align( ui_ImageArmSecond, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmSecond, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmSecond, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmSecond,5,232);
lv_img_set_angle(ui_ImageArmSecond,1400);

ui_LabelLongDate = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_LabelLongDate, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelLongDate, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelLongDate, 0 );
lv_obj_set_y( ui_LabelLongDate, -72 );
lv_obj_set_align( ui_LabelLongDate, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelLongDate,"2023 January 27, Friday");
lv_obj_add_flag( ui_LabelLongDate, LV_OBJ_FLAG_HIDDEN );   /// Flags
lv_obj_set_style_text_color(ui_LabelLongDate, lv_color_hex(0x333333), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelLongDate, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_LabelLongDate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelLongDate, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
lv_disp_load_scr( ui_Screen1);
}
