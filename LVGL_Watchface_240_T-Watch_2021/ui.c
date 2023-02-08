// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.0
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Image2;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Image8;
lv_obj_t *ui_Image9;
lv_obj_t *ui_Image10;
lv_obj_t *ui_Image11;
lv_obj_t *ui_Image12;
lv_obj_t *ui_ImageWatchface;
lv_obj_t *ui_ImageArmHour;
lv_obj_t *ui_ImageArmMinute;
lv_obj_t *ui_ImageArmSecond;
lv_obj_t *ui_LabelDate;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image1, &ui_img_01_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image2 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image2, &ui_img_03_png);
lv_obj_set_width( ui_Image2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image3 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image3, &ui_img_05_png);
lv_obj_set_width( ui_Image3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image4 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image4, &ui_img_07_png);
lv_obj_set_width( ui_Image4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image5 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image5, &ui_img_09_png);
lv_obj_set_width( ui_Image5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image5, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image5, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image6 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image6, &ui_img_11_png);
lv_obj_set_width( ui_Image6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image6, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image7 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image7, &ui_img_13_png);
lv_obj_set_width( ui_Image7, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image7, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image8 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image8, &ui_img_15_png);
lv_obj_set_width( ui_Image8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image8, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image9 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image9, &ui_img_17_png);
lv_obj_set_width( ui_Image9, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image9, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image9, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image9, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image9, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image10 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image10, &ui_img_19_png);
lv_obj_set_width( ui_Image10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image10, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image10, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image11 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image11, &ui_img_21_png);
lv_obj_set_width( ui_Image11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image11, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image11, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image11, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image12 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image12, &ui_img_23_png);
lv_obj_set_width( ui_Image12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Image12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Image12, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image12, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image12, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ImageWatchface = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageWatchface, &ui_img_watchface240_png);
lv_obj_set_width( ui_ImageWatchface, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageWatchface, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_ImageWatchface, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageWatchface, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageWatchface, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_ImageArmHour = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmHour, &ui_img_armhourblue_png);
lv_obj_set_width( ui_ImageArmHour, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmHour, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmHour, 0 );
lv_obj_set_y( ui_ImageArmHour, -35 );
lv_obj_set_align( ui_ImageArmHour, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmHour, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmHour, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmHour,9,77);
lv_img_set_angle(ui_ImageArmHour,750);

ui_ImageArmMinute = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmMinute, &ui_img_armminuteblue_png);
lv_obj_set_width( ui_ImageArmMinute, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmMinute, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmMinute, 0 );
lv_obj_set_y( ui_ImageArmMinute, -49 );
lv_obj_set_align( ui_ImageArmMinute, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmMinute, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmMinute, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmMinute,9,105);
lv_img_set_angle(ui_ImageArmMinute,1800);

ui_ImageArmSecond = lv_img_create(ui_Screen1);
lv_img_set_src(ui_ImageArmSecond, &ui_img_armsecondblue_png);
lv_obj_set_width( ui_ImageArmSecond, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ImageArmSecond, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ImageArmSecond, 0 );
lv_obj_set_y( ui_ImageArmSecond, -47 );
lv_obj_set_align( ui_ImageArmSecond, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_ImageArmSecond, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ImageArmSecond, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_img_set_pivot(ui_ImageArmSecond,5,115);
lv_img_set_angle(ui_ImageArmSecond,3150);

ui_LabelDate = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_LabelDate, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_LabelDate, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_LabelDate, 72 );
lv_obj_set_y( ui_LabelDate, 0 );
lv_obj_set_align( ui_LabelDate, LV_ALIGN_CENTER );
lv_label_set_text(ui_LabelDate,"dow dd");
lv_obj_set_style_text_color(ui_LabelDate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_LabelDate, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_LabelDate, &lv_font_montserrat_14, LV_PART_MAIN| LV_STATE_DEFAULT);

}

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Screen1_screen_init();
lv_disp_load_scr( ui_Screen1);
}
