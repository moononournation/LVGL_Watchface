/*******************************************************************************
 * Size: 28 px
 * Bpp: 8
 * Opts: --bpp 8 --size 28 --font /Users/leungchan/GoogleDrive/Arduino/LVGL_Watchface/SquareLine/assets/NotoSansCJKhk-Medium.otf -o /Users/leungchan/GoogleDrive/Arduino/LVGL_Watchface/SquareLine/assets/ui_font_SansDate.c --format lvgl --symbols 0123456789星期日一二三四五六 --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_SANSDATE
#define UI_FONT_SANSDATE 1
#endif

#if UI_FONT_SANSDATE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0030 "0" */
    0x0, 0x0, 0x81, 0x5b, 0xf2, 0x7c, 0x3c, 0x72,
    0x5b, 0x41, 0x0, 0x0, 0x38, 0x4f, 0x33, 0xff,
    0xff, 0xd9, 0x1, 0xe0, 0x0, 0x10, 0xe, 0xf,
    0xff, 0xfb, 0xe2, 0xea, 0xe3, 0xe3, 0xff, 0xfd,
    0x70, 0x0, 0x1, 0x2c, 0xff, 0xff, 0xba, 0x8,
    0xc0, 0x0, 0x4, 0x9d, 0x5f, 0xff, 0xe4, 0xd0,
    0x0, 0x6, 0x4f, 0xff, 0xf9, 0x80, 0x0, 0x3,
    0x32, 0x7f, 0xff, 0xaf, 0x0, 0x7, 0x3f, 0xbf,
    0xfd, 0x42, 0x0, 0x0, 0x30, 0x57, 0xc7, 0xff,
    0xd8, 0x92, 0x9f, 0xff, 0xfa, 0xfc, 0x0, 0x3,
    0xd8, 0xbf, 0xff, 0xe4, 0x57, 0xef, 0xff, 0xf4,
    0xc0, 0x0, 0x7, 0xa7, 0xbf, 0xff, 0xce, 0x13,
    0x1f, 0xff, 0xe7, 0xe0, 0x0, 0xf, 0x41, 0xff,
    0xff, 0xa2, 0xe9, 0x3f, 0xff, 0xce, 0x60, 0x0,
    0x1e, 0x78, 0xff, 0xff, 0x4b, 0xd6, 0x7f, 0xff,
    0x9b, 0x40, 0x0, 0x3c, 0xe5, 0xff, 0xfe, 0xa0,
    0xa2, 0xff, 0xff, 0x3a, 0x0, 0x0, 0x79, 0xeb,
    0xff, 0xfd, 0x2b, 0x2d, 0xff, 0xfe, 0x81, 0x0,
    0x0, 0xf4, 0x37, 0xff, 0xfa, 0x25, 0xe3, 0xff,
    0xfd, 0x38, 0x0, 0x1, 0xea, 0x2f, 0xff, 0xf3,
    0x52, 0x77, 0xff, 0xfb, 0x18, 0x0, 0x3, 0xd9,
    0x7f, 0xff, 0xe4, 0x1, 0x5f, 0xcf, 0xff, 0x90,
    0xd0, 0x0, 0xc, 0x21, 0xf7, 0xff, 0xf0, 0x1a,
    0x1, 0x81, 0xff, 0xfe, 0x6b, 0x0, 0x0, 0xcd,
    0xff, 0xff, 0xeb, 0x50, 0x0, 0x2, 0x77, 0xff,
    0xfb, 0xb4, 0xac, 0x0, 0x0, 0x59, 0xdf, 0xff,
    0xfe, 0x43, 0x0, 0x0, 0xad, 0xbf, 0xff, 0xdf,
    0x98, 0x58, 0x3f, 0x9f, 0xff, 0xea, 0xe0, 0x0,
    0xc, 0x1f, 0x8d, 0xff, 0xff, 0xec, 0x20, 0xc0,
    0x0, 0xe, 0x4, 0x6b, 0xc9, 0xf1, 0xf2, 0xca,
    0x6a, 0x3, 0x0, 0x0, 0x80,

    /* U+0031 "1" */
    0x0, 0x0, 0x81, 0x99, 0x37, 0x7f, 0xff, 0xc4,
    0xe0, 0x0, 0x1c, 0xbd, 0x67, 0xe5, 0xff, 0xff,
    0x89, 0xc0, 0x0, 0x3b, 0x1f, 0xff, 0xff, 0xc4,
    0xe0, 0x0, 0x1d, 0x19, 0x67, 0x66, 0xb9, 0xff,
    0xff, 0x89, 0xc0, 0x0, 0x3f, 0x9, 0xff, 0xff,
    0xc4, 0xe0, 0x0, 0x1f, 0x84, 0xff, 0xff, 0xe2,
    0x70, 0x0, 0xf, 0xc2, 0x7f, 0xff, 0xf1, 0x38,
    0x0, 0x7, 0xe1, 0x3f, 0xff, 0xf8, 0x9c, 0x0,
    0x3, 0xf0, 0x9f, 0xff, 0xfc, 0x4e, 0x0, 0x1,
    0xf8, 0x4f, 0xff, 0xfe, 0x27, 0x0, 0x0, 0xfc,
    0x27, 0xff, 0xff, 0x13, 0x80, 0x0, 0x7e, 0x13,
    0xff, 0xff, 0x89, 0xc0, 0x0, 0x3f, 0x9, 0xff,
    0xff, 0xc4, 0xe0, 0x0, 0x1f, 0x84, 0xff, 0xff,
    0xe2, 0x70, 0x0, 0xf, 0xc2, 0x7f, 0xff, 0xf1,
    0x38, 0x0, 0x7, 0xe1, 0x3f, 0xff, 0xf8, 0x9c,
    0x0, 0x3, 0xf0, 0x9f, 0xff, 0xfc, 0x4e, 0x0,
    0x1, 0xf8, 0x4f, 0xff, 0xfe, 0x27, 0x0, 0x0,
    0xcd, 0xb5, 0xf5, 0xf5, 0xb7, 0xff, 0xfd, 0x79,
    0x5f, 0x5f, 0xf, 0x4f, 0xff, 0xff, 0xff, 0xc5,
    0x73, 0xff, 0xff, 0xff, 0xf1, 0x58,

    /* U+0032 "2" */
    0x0, 0x0, 0x6, 0xb5, 0x60, 0xf3, 0x7a, 0x66,
    0x50, 0x9a, 0x0, 0x0, 0x72, 0xf, 0xf, 0xff,
    0xff, 0xbf, 0x23, 0x0, 0x40, 0x0, 0xa, 0xbf,
    0x7f, 0xff, 0xee, 0xab, 0x4b, 0xde, 0xff, 0xff,
    0xf9, 0x98, 0x0, 0x1, 0xd, 0xff, 0xfe, 0x80,
    0x7, 0x0, 0x0, 0x7, 0xd7, 0xff, 0xff, 0xbc,
    0x4, 0xc0, 0x0, 0xf, 0xeb, 0x80, 0x0, 0x1c,
    0x21, 0xdd, 0xff, 0xfe, 0x48, 0x0, 0x0, 0xff,
    0x5a, 0x7f, 0xff, 0x9d, 0x40, 0x0, 0x3f, 0xd3,
    0x9f, 0xff, 0xe8, 0xa0, 0x0, 0xf, 0xf5, 0xc7,
    0xff, 0xf9, 0xbc, 0x0, 0x3, 0xf8, 0x27, 0xd3,
    0xff, 0xfc, 0x64, 0x0, 0x1, 0xfc, 0xcb, 0xff,
    0xfe, 0xd5, 0x1, 0x0, 0x0, 0xfc, 0x15, 0xc3,
    0xff, 0xfe, 0x53, 0x0, 0x0, 0xfe, 0x90, 0xff,
    0xff, 0x67, 0x0, 0x80, 0x0, 0x7e, 0x4e, 0xfe,
    0xff, 0xfb, 0x3c, 0x0, 0x0, 0xfc, 0x55, 0xe3,
    0xff, 0xfe, 0x72, 0x0, 0x0, 0xfc, 0x3d, 0xc7,
    0xff, 0xfe, 0xab, 0x0, 0x0, 0xfc, 0x35, 0xb3,
    0xff, 0xfe, 0xcb, 0xd, 0x0, 0x0, 0xf8, 0x73,
    0x6b, 0xff, 0xfd, 0x9e, 0x22, 0x0, 0x1, 0xf1,
    0x26, 0xf7, 0xff, 0xfb, 0x50, 0x50, 0x0, 0x3,
    0xe3, 0x3e, 0x9f, 0xff, 0xfa, 0xd2, 0xb6, 0xff,
    0x3b, 0x3f, 0x3f, 0x3a, 0x61, 0x7f, 0xff, 0xff,
    0xf0, 0x23, 0xf0, 0xff, 0xff, 0xff, 0xf8, 0x11,
    0xe0,

    /* U+0033 "3" */
    0x0, 0x0, 0x81, 0x59, 0x6e, 0xf9, 0x7d, 0xf6,
    0x6e, 0x18, 0x81, 0x40, 0x0, 0x38, 0xbb, 0x43,
    0xff, 0xff, 0xee, 0x2, 0x70, 0x0, 0x8, 0xef,
    0xe7, 0xff, 0xfd, 0xf7, 0x9f, 0x5f, 0xaf, 0xff,
    0xff, 0x6d, 0x8, 0x0, 0x0, 0x0, 0x68, 0x7e,
    0x1f, 0x2, 0x80, 0x0, 0x25, 0xef, 0xef, 0xff,
    0xf3, 0x8, 0x0, 0x4, 0x8, 0x48, 0x0, 0x1,
    0xeb, 0xaf, 0xff, 0xf4, 0xc8, 0x0, 0x7, 0xfd,
    0x3f, 0xff, 0xfe, 0xa4, 0x0, 0x0, 0xff, 0x2,
    0xec, 0xff, 0xff, 0x9c, 0xc0, 0x0, 0x3f, 0x85,
    0xa9, 0xff, 0xff, 0xdd, 0x1, 0xa0, 0x0, 0x1e,
    0x79, 0x96, 0xb6, 0xf9, 0xff, 0xff, 0x71, 0x96,
    0x0, 0x0, 0x7d, 0xe7, 0xff, 0xff, 0xa5, 0xc2,
    0x80, 0x0, 0x3f, 0x79, 0xff, 0xff, 0xef, 0xeb,
    0x61, 0xc0, 0x0, 0xf, 0x81, 0x44, 0x8d, 0x20,
    0x39, 0x7f, 0xff, 0xdc, 0xe4, 0xc0, 0x0, 0x1f,
    0xe0, 0x7c, 0x6f, 0xff, 0xf5, 0xd0, 0x0, 0x7,
    0xfc, 0x51, 0xff, 0xff, 0x11, 0x0, 0x0, 0x7f,
    0x80, 0x7c, 0xff, 0xff, 0xc9, 0xc0, 0x0, 0x1f,
    0xe0, 0x9f, 0xcf, 0xff, 0xf2, 0xa8, 0x0, 0xce,
    0x9, 0x50, 0x0, 0x7, 0x96, 0xbf, 0xff, 0xe2,
    0xd0, 0x3c, 0xf, 0xff, 0x46, 0x90, 0xa0, 0x0,
    0x9, 0x57, 0xc3, 0xff, 0xfd, 0x98, 0x0, 0x15,
    0x81, 0xff, 0xff, 0x7a, 0x66, 0xe1, 0xf4, 0xff,
    0xff, 0xdd, 0xe4, 0x60, 0x0, 0x0, 0x88, 0xef,
    0xcf, 0xff, 0xff, 0xb6, 0xd0, 0x0, 0x0, 0x38,
    0x96, 0x3, 0x23, 0x97, 0xdf, 0x66, 0xc9, 0xa4,
    0x14, 0x0, 0x2,

    /* U+0034 "4" */
    0x0, 0x0, 0xfd, 0x15, 0xff, 0xff, 0x41, 0x80,
    0x0, 0x7f, 0x8b, 0x7e, 0xff, 0xff, 0xe8, 0x30,
    0x0, 0xf, 0xe0, 0x1c, 0x4f, 0xff, 0xfd, 0x6,
    0x0, 0x1, 0xfc, 0xc5, 0xff, 0xfe, 0xcf, 0xff,
    0xff, 0x41, 0x80, 0x0, 0x7e, 0x13, 0xec, 0xff,
    0xe3, 0x74, 0xff, 0xff, 0x41, 0x80, 0x0, 0x7e,
    0x9c, 0xff, 0xff, 0x35, 0x3b, 0xff, 0xff, 0xa0,
    0xc0, 0x0, 0x3e, 0x3a, 0xfe, 0xff, 0xe1, 0x7,
    0x7e, 0xff, 0xff, 0x41, 0x80, 0x0, 0x78, 0x13,
    0x4b, 0xff, 0xfc, 0x9a, 0x1, 0x7, 0xff, 0xfe,
    0x83, 0x0, 0x0, 0xf3, 0x9f, 0xff, 0xfa, 0xb0,
    0x0, 0x1, 0x7, 0xff, 0xfe, 0x83, 0x0, 0x0,
    0xe1, 0xcf, 0x3f, 0xff, 0x11, 0xa0, 0x0, 0x4,
    0x1f, 0xff, 0xfa, 0xc, 0x0, 0x3, 0xab, 0x7f,
    0xff, 0xcd, 0x40, 0x0, 0x14, 0x1f, 0xff, 0xfa,
    0xc, 0x0, 0x3, 0x25, 0x7f, 0xff, 0xb1, 0xc0,
    0x80, 0x0, 0x28, 0x3f, 0xff, 0xf4, 0x18, 0x0,
    0x4, 0x13, 0xbd, 0xff, 0xf6, 0x5a, 0x0, 0x1,
    0xa0, 0xff, 0xff, 0xd0, 0x60, 0x0, 0x13, 0x2f,
    0xff, 0xff, 0xff, 0x8, 0x7d, 0xbf, 0xff, 0xff,
    0xff, 0x84, 0x3e, 0x7d, 0x1f, 0x1f, 0xfb, 0x27,
    0xff, 0xfd, 0x93, 0x1f, 0x1e, 0x11, 0x0, 0x0,
    0xfe, 0x83, 0xff, 0xff, 0x41, 0x80, 0x0, 0x7f,
    0xf0, 0x20, 0xff, 0xff, 0xd0, 0x60, 0x0, 0x1f,
    0xfc, 0x8, 0x3f, 0xff, 0xf4, 0x18, 0x0, 0x7,
    0xff, 0x2, 0xf, 0xff, 0xfd, 0x6, 0x0, 0x1,
    0xff, 0xc0, 0x83, 0xff, 0xff, 0x41, 0x80, 0x0,
    0x40,

    /* U+0035 "5" */
    0x0, 0x0, 0x1, 0x7f, 0x7f, 0xff, 0xff, 0x3b,
    0x80, 0x0, 0x42, 0x3f, 0xff, 0xff, 0xe7, 0x70,
    0x0, 0x8, 0x8b, 0xff, 0xfd, 0xeb, 0x8f, 0x8f,
    0xf2, 0xe8, 0x0, 0x4, 0x67, 0xff, 0xfe, 0xc1,
    0x0, 0x0, 0xff, 0x91, 0x3f, 0xff, 0xd5, 0x0,
    0x0, 0x1f, 0xf2, 0xa7, 0xff, 0xfa, 0x38, 0x0,
    0x3, 0xfe, 0x65, 0xff, 0xff, 0x3a, 0x80, 0x0,
    0x7f, 0xce, 0xdf, 0xff, 0xea, 0x4b, 0xae, 0x9f,
    0xc, 0x79, 0x41, 0xa0, 0x0, 0xe, 0x87, 0xff,
    0xff, 0xfd, 0xe4, 0xc4, 0x0, 0x1, 0x9a, 0xbf,
    0xbf, 0xf1, 0xe2, 0x9d, 0xa8, 0xfd, 0xff, 0xff,
    0xdf, 0x66, 0x0, 0x0, 0x19, 0x1, 0x34, 0x0,
    0x3, 0x14, 0xf1, 0x7f, 0xff, 0xb3, 0x40, 0x0,
    0x3f, 0xe5, 0x4f, 0xff, 0xf8, 0x58, 0x0, 0x3,
    0xfc, 0x9, 0xf5, 0xff, 0xfe, 0x40, 0x0, 0x0,
    0xff, 0xb6, 0x7f, 0xff, 0xcd, 0x0, 0x0, 0x1f,
    0xf7, 0x57, 0xff, 0xf9, 0x80, 0x0, 0x3, 0xfc,
    0x35, 0xff, 0xff, 0x1f, 0x0, 0xd, 0xd9, 0x8d,
    0x80, 0x0, 0x7a, 0x6f, 0xff, 0xfd, 0xdc, 0x8,
    0x5, 0x7d, 0xff, 0xd4, 0xae, 0xa, 0x0, 0x0,
    0x7, 0x89, 0xfe, 0xff, 0xff, 0x33, 0x0, 0x7,
    0xe6, 0x7f, 0xff, 0xde, 0x19, 0x59, 0x3e, 0xdf,
    0xff, 0xf5, 0xc8, 0x0, 0x4, 0x17, 0x21, 0xf9,
    0xff, 0xff, 0xf5, 0x0, 0x88, 0x0, 0x7, 0x12,
    0x3f, 0xe3, 0xf2, 0xfb, 0x68, 0x50, 0xa1, 0x80,
    0x0, 0x60,

    /* U+0036 "6" */
    0x0, 0x0, 0xc0, 0xed, 0x98, 0x3d, 0x7e, 0xfb,
    0x93, 0x86, 0x0, 0x0, 0x1c, 0x59, 0xb7, 0xff,
    0xff, 0xef, 0x97, 0x0, 0x0, 0x8, 0x9b, 0xaf,
    0xff, 0xfd, 0xfd, 0xb3, 0x6d, 0xc7, 0xff, 0xfe,
    0xf2, 0x27, 0x0, 0x2, 0xc5, 0xff, 0xff, 0x6c,
    0x14, 0x0, 0x0, 0x48, 0x3a, 0xa7, 0x80, 0x0,
    0x4, 0xff, 0xff, 0xf6, 0xe0, 0x78, 0x0, 0x7,
    0xf5, 0xaf, 0xff, 0xf9, 0x60, 0x0, 0x3, 0xf8,
    0x1b, 0xe3, 0xff, 0xcc, 0x20, 0x0, 0x3, 0xf8,
    0xd3, 0xff, 0xfd, 0x80, 0x0, 0x0, 0x1c, 0x52,
    0x4b, 0x20, 0x1, 0x0, 0x0, 0x97, 0xbf, 0xff,
    0xd3, 0x22, 0xb4, 0xdf, 0x9f, 0xff, 0xf6, 0xc1,
    0xd0, 0x0, 0x1, 0xbb, 0xff, 0xfd, 0x49, 0xc1,
    0xff, 0xff, 0xef, 0xd5, 0x10, 0x7, 0xef, 0xff,
    0xfb, 0xfa, 0x4c, 0xa0, 0x2c, 0xdf, 0xb, 0xff,
    0xfd, 0xc0, 0x12, 0xf5, 0xff, 0xfe, 0xfe, 0x57,
    0x0, 0x0, 0xc0, 0xbb, 0xff, 0xff, 0xe6, 0x6,
    0xbf, 0xff, 0xf5, 0x10, 0x0, 0x7, 0x9d, 0xff,
    0xff, 0xd1, 0x2a, 0x5f, 0xff, 0xeb, 0x60, 0x0,
    0xf, 0x28, 0x7f, 0xff, 0xab, 0xc8, 0x7f, 0xff,
    0xdc, 0x60, 0x0, 0x1e, 0x49, 0xff, 0xff, 0x5b,
    0x0, 0x72, 0x7f, 0xff, 0x8b, 0x0, 0x0, 0x39,
    0xb3, 0xff, 0xfd, 0x14, 0x1, 0xf, 0xff, 0xfe,
    0x9e, 0x0, 0x0, 0xeb, 0xff, 0xff, 0xf2, 0xe8,
    0x0, 0xdf, 0x97, 0xff, 0xeb, 0x20, 0x0, 0x4,
    0xcd, 0xff, 0xfe, 0xe6, 0xe, 0x0, 0x0, 0x33,
    0x7f, 0xff, 0xd8, 0xb2, 0x77, 0xdf, 0xff, 0xf2,
    0xa8, 0x0, 0x6, 0x74, 0xfb, 0xff, 0xff, 0xef,
    0x87, 0x20, 0x0, 0xf, 0x17, 0xce, 0xf0, 0xfb,
    0xe9, 0x4e, 0x97, 0x0, 0x0, 0x40,

    /* U+0037 "7" */
    0x97, 0xff, 0xff, 0xff, 0xe0, 0x51, 0xcb, 0xff,
    0xff, 0xff, 0xf0, 0x28, 0xdd, 0xb1, 0xf1, 0xff,
    0x64, 0xff, 0xff, 0xc9, 0x60, 0x0, 0x1f, 0xcb,
    0xff, 0xff, 0xe9, 0x10, 0x0, 0xf, 0xe1, 0xe,
    0x9f, 0xfd, 0x90, 0x70, 0x0, 0xf, 0xe9, 0x4f,
    0xff, 0xf2, 0x38, 0x0, 0x7, 0xf1, 0x97, 0xef,
    0xfd, 0xa0, 0x0, 0x7, 0xfa, 0xb3, 0xff, 0xfc,
    0x74, 0x0, 0x1, 0xfc, 0x2f, 0xf5, 0xff, 0x8c,
    0x0, 0x1, 0xfe, 0x78, 0xff, 0xff, 0x34, 0x80,
    0x0, 0x7f, 0x0, 0xee, 0xff, 0xfe, 0x8b, 0x0,
    0x0, 0x7f, 0x19, 0xff, 0xff, 0xb6, 0x0, 0x0,
    0x3f, 0xcd, 0x7f, 0xff, 0xea, 0x80, 0x0, 0xf,
    0xf5, 0x1f, 0xff, 0xf9, 0xdc, 0x0, 0x3, 0xfd,
    0xb7, 0xff, 0xfe, 0x46, 0x0, 0x0, 0xfe, 0x12,
    0xff, 0xff, 0x86, 0x40, 0x0, 0x3f, 0x8c, 0x7f,
    0xff, 0xdf, 0x80, 0x40, 0x0, 0x1f, 0xc9, 0x1f,
    0xff, 0xee, 0x80, 0x0, 0xf, 0xf2, 0xff, 0xff,
    0xfb, 0x58, 0x0, 0x3, 0xfc, 0xed, 0xff, 0xfe,
    0xc7, 0x0, 0x0, 0xff, 0x46, 0x7f, 0xff, 0xae,
    0x80, 0x0, 0x3c,

    /* U+0038 "8" */
    0x0, 0x0, 0x82, 0x1d, 0xaf, 0x79, 0x7b, 0xb1,
    0x23, 0x85, 0x0, 0x0, 0x38, 0xbb, 0x83, 0xff,
    0xff, 0xdd, 0xa9, 0x60, 0x0, 0x10, 0x66, 0xcf,
    0xff, 0xfb, 0x31, 0xd1, 0xce, 0xf7, 0xff, 0xfd,
    0xda, 0x32, 0x0, 0x0, 0x6b, 0xff, 0xff, 0x5c,
    0x1, 0x80, 0x0, 0x52, 0x3f, 0xff, 0xe8, 0xe0,
    0x0, 0x5, 0x7, 0xff, 0xf9, 0x0, 0x0, 0x3,
    0x6, 0x7d, 0x7f, 0xe0, 0x0, 0x0, 0x2f, 0x3f,
    0xff, 0xc4, 0xa0, 0x0, 0x1d, 0xb3, 0xff, 0xbe,
    0x0, 0x0, 0x98, 0xff, 0xff, 0x2d, 0x0, 0x0,
    0x60, 0x4f, 0x5f, 0xfb, 0xb0, 0x0, 0x1, 0xd7,
    0xff, 0xfb, 0x74, 0x48, 0x0, 0x2, 0x38, 0xff,
    0xff, 0x2f, 0x0, 0x0, 0x50, 0x9f, 0xff, 0xed,
    0xb4, 0x10, 0x0, 0x5c, 0x9f, 0xfc, 0x60, 0x40,
    0x0, 0xd, 0xf, 0xff, 0xff, 0x60, 0xd3, 0xff,
    0xe9, 0x8c, 0x80, 0x0, 0x60, 0xb9, 0x4f, 0xff,
    0xff, 0x49, 0x2, 0x80, 0x0, 0x42, 0x39, 0xff,
    0xfd, 0x87, 0x6d, 0xfb, 0x7f, 0xff, 0xf6, 0x30,
    0x68, 0x0, 0x2, 0xe7, 0xff, 0xc8, 0xc8, 0x0,
    0x0, 0x8, 0xd7, 0xe3, 0xff, 0xfe, 0xb1, 0x0,
    0x44, 0xff, 0xff, 0x42, 0x80, 0x0, 0x71, 0xdf,
    0xaf, 0xff, 0xf8, 0xe6, 0x2b, 0xff, 0xfc, 0x7a,
    0x0, 0x1, 0xea, 0x2f, 0xff, 0xf3, 0xed, 0x77,
    0xff, 0xf8, 0xd4, 0x0, 0x3, 0xcd, 0xdf, 0xff,
    0xe9, 0xf9, 0xbf, 0xff, 0xf3, 0xb0, 0x0, 0x7,
    0xa5, 0x3f, 0xff, 0xcf, 0x29, 0x9f, 0xff, 0xef,
    0x63, 0xc0, 0x0, 0xc, 0x69, 0xef, 0xff, 0xfe,
    0x3b, 0x0, 0x9d, 0xff, 0xff, 0x7f, 0x57, 0xbb,
    0xb7, 0xd0, 0xfd, 0xff, 0xff, 0xa6, 0x40, 0x0,
    0x0, 0xd4, 0x1f, 0xbf, 0xff, 0xfe, 0xfe, 0xa1,
    0x6, 0x0, 0x0, 0xc5, 0x93, 0x78, 0xdd, 0x9d,
    0xb8, 0xf3, 0xa6, 0x0, 0x0, 0x10,

    /* U+0039 "9" */
    0x0, 0x0, 0x8d, 0xe8, 0x34, 0xfd, 0xb7, 0xe6,
    0xcb, 0x80, 0x0, 0x38, 0xa, 0x17, 0xf3, 0xff,
    0xff, 0xbe, 0xdd, 0x80, 0x0, 0x33, 0x7f, 0xff,
    0xfb, 0xfa, 0xe6, 0x4f, 0x13, 0xff, 0xfe, 0x6b,
    0x0, 0x0, 0xf, 0x79, 0xff, 0xff, 0x29, 0x0,
    0x0, 0x4b, 0xbf, 0x5f, 0xfe, 0x83, 0xc0, 0xe,
    0x3f, 0xff, 0xea, 0x80, 0x0, 0xe, 0x97, 0xff,
    0xff, 0x44, 0x0, 0x4f, 0xff, 0xff, 0x96, 0xc0,
    0x0, 0x38, 0x87, 0xff, 0xfd, 0xca, 0x1, 0x91,
    0xff, 0xfe, 0x3d, 0x0, 0x0, 0xf7, 0xf, 0xff,
    0xf8, 0x7a, 0xcf, 0xff, 0xfc, 0x9e, 0x0, 0x1,
    0xeb, 0x3f, 0xff, 0xf2, 0x74, 0x67, 0xff, 0xfa,
    0x1c, 0x0, 0x3, 0x82, 0xb4, 0x7f, 0xff, 0xcc,
    0x2a, 0x3f, 0xff, 0xef, 0x22, 0x60, 0x0, 0x8,
    0x46, 0xe3, 0xff, 0xfe, 0x72, 0x0, 0xc2, 0xff,
    0xff, 0x79, 0x49, 0x35, 0x45, 0xf5, 0x7f, 0xf4,
    0x7f, 0xff, 0x9b, 0x0, 0x9, 0xf5, 0xff, 0xff,
    0xfb, 0xe9, 0x96, 0x77, 0xff, 0xfc, 0xb8, 0x0,
    0x0, 0x8, 0x7e, 0xc0, 0xec, 0xed, 0xb1, 0x39,
    0x0, 0xb4, 0xff, 0xff, 0x25, 0x0, 0x0, 0x7f,
    0xb8, 0x7f, 0xff, 0xc3, 0x80, 0x0, 0x1f, 0xc3,
    0xdf, 0xff, 0xee, 0x80, 0x0, 0xf, 0xf3, 0xdf,
    0xff, 0xfa, 0x64, 0x0, 0x2, 0xd, 0x0, 0x0,
    0xe1, 0xae, 0xff, 0xff, 0xf1, 0xb8, 0x0, 0x1,
    0x63, 0xb9, 0x60, 0xc, 0x0, 0x0, 0x61, 0xab,
    0xff, 0xfe, 0xad, 0x0, 0x0, 0x17, 0xfc, 0x7f,
    0xff, 0xbd, 0x31, 0xf9, 0xff, 0xff, 0xee, 0x21,
    0xa0, 0x0, 0x0, 0xb, 0xaf, 0xd7, 0xff, 0xff,
    0xb5, 0x48, 0xc0, 0x0, 0x38, 0xc2, 0x6f, 0x73,
    0xdb, 0xbb, 0x11, 0xac, 0x18, 0x0, 0x3, 0x0,

    /* U+4E00 "一" */
    0x21, 0x27, 0x27, 0xff, 0xe6, 0x12, 0xe9, 0xff,
    0xff, 0xff, 0xf3, 0x3b, 0xf4, 0xff, 0xff, 0xff,
    0xf9, 0x9d, 0xf3, 0xd7, 0xf7, 0xff, 0xfc, 0xcb,
    0x30,

    /* U+4E09 "三" */
    0x0, 0x0, 0x4a, 0x79, 0xf9, 0xff, 0xf2, 0x27,
    0x0, 0x0, 0x34, 0xdf, 0xff, 0xff, 0xff, 0x22,
    0x8c, 0x0, 0x3, 0x3a, 0x5f, 0xdf, 0xff, 0xf2,
    0x1e, 0x80, 0x0, 0x3f, 0xff, 0xe0, 0x0, 0x1f,
    0xff, 0xf0, 0x0, 0xf, 0xfe, 0x4, 0x55, 0xdd,
    0xdf, 0xff, 0x11, 0x48, 0x0, 0x3, 0xf5, 0xdf,
    0xff, 0xff, 0xff, 0x11, 0xbc, 0x0, 0x3, 0xf5,
    0x9f, 0x9f, 0x9f, 0xff, 0x11, 0xa8, 0x0, 0x3,
    0xff, 0xfe, 0x0, 0x1, 0xff, 0xff, 0x0, 0x0,
    0xff, 0x1, 0x5, 0x85, 0xff, 0xf3, 0x0, 0x4c,
    0xff, 0xff, 0xff, 0xf9, 0x84, 0xe6, 0x7f, 0xff,
    0xff, 0xfc, 0xc2, 0x72, 0x1a, 0x3a, 0x3f, 0xfe,
    0x60, 0xc8,

    /* U+4E8C "二" */
    0x0, 0x0, 0xae, 0x75, 0xf5, 0xff, 0xf8, 0xe9,
    0x40, 0x0, 0x1d, 0xb7, 0xff, 0xff, 0xff, 0xc7,
    0x57, 0x0, 0x0, 0xed, 0xbf, 0xff, 0xff, 0xfe,
    0x3a, 0xb8, 0x0, 0x7, 0x5, 0x5, 0x85, 0xff,
    0xf1, 0xc1, 0x0, 0x0, 0x3f, 0xff, 0xe0, 0x0,
    0x1f, 0xff, 0xf0, 0x0, 0xf, 0xff, 0xf8, 0x0,
    0x7, 0xff, 0xfc, 0x0, 0x3, 0xff, 0x84, 0x8,
    0x26, 0x27, 0xff, 0xcc, 0xe, 0x37, 0xff, 0xff,
    0xff, 0xe6, 0x59, 0x9b, 0xff, 0xff, 0xff, 0xf3,
    0x2c, 0xcd, 0x7c, 0xfc, 0xff, 0xf9, 0x95, 0x60,

    /* U+4E94 "五" */
    0x0, 0x0, 0x53, 0x7b, 0xfb, 0xff, 0xf2, 0x34,
    0x40, 0x0, 0x35, 0x5f, 0xff, 0xff, 0xff, 0x23,
    0x5c, 0x0, 0x3, 0x35, 0xcf, 0xcf, 0xfd, 0xf5,
    0xff, 0xfe, 0xa2, 0x9f, 0x9f, 0xfe, 0x86, 0x0,
    0x0, 0xff, 0x83, 0xff, 0xff, 0xdc, 0xc0, 0x0,
    0x1f, 0xfc, 0xa3, 0xaf, 0xff, 0xf5, 0xb8, 0x0,
    0x7, 0xff, 0x29, 0x9b, 0xff, 0xfd, 0x10, 0x0,
    0x1, 0xff, 0xca, 0x92, 0xff, 0xff, 0x2c, 0x80,
    0x0, 0x7f, 0xf2, 0xaf, 0xbf, 0xff, 0xc5, 0x40,
    0x0, 0x1f, 0xfc, 0x47, 0x8a, 0x7a, 0x7e, 0xf3,
    0xff, 0xff, 0x56, 0x53, 0xd3, 0xfe, 0x1f, 0x0,
    0x0, 0xfa, 0xdf, 0xff, 0xff, 0xff, 0x8a, 0x5e,
    0x0, 0x1, 0xf5, 0x7f, 0x9f, 0x9e, 0xf8, 0xff,
    0xff, 0x7d, 0x79, 0xf9, 0xfb, 0xef, 0xff, 0xfc,
    0x5e, 0x0, 0x1, 0xff, 0xc0, 0x86, 0xff, 0xff,
    0x32, 0x80, 0x0, 0x7a, 0x5f, 0xff, 0xfc, 0x5e,
    0x0, 0x1, 0xff, 0xc0, 0xbc, 0xff, 0xff, 0x18,
    0x0, 0x0, 0x7a, 0x5f, 0xff, 0xfc, 0x5e, 0x0,
    0x1, 0xff, 0x1, 0x78, 0xff, 0xfb, 0x2, 0x0,
    0x0, 0x7a, 0x5f, 0xff, 0xfc, 0x5e, 0x0, 0x1,
    0xff, 0x15, 0x7f, 0xff, 0xb1, 0x0, 0x0, 0x3e,
    0x97, 0xff, 0xff, 0x17, 0x80, 0x0, 0x7f, 0xcc,
    0x3f, 0xff, 0xe8, 0xe0, 0x0, 0xf, 0xa5, 0xff,
    0xff, 0xc5, 0xe0, 0x0, 0x1f, 0xf4, 0xe7, 0xff,
    0xf9, 0x54, 0x0, 0x3, 0xe9, 0x7f, 0xff, 0xf1,
    0x78, 0x0, 0x7, 0xfd, 0xb1, 0xff, 0xfe, 0x1c,
    0x0, 0x0, 0xfa, 0x5f, 0xff, 0xfc, 0x5e, 0x0,
    0x1, 0xfe, 0x14, 0xff, 0xff, 0x71, 0x0, 0x0,
    0x7e, 0x97, 0xff, 0xff, 0x17, 0x80, 0x0, 0x62,
    0x8a, 0xba, 0xbe, 0xbf, 0xff, 0xff, 0x75, 0x55,
    0xd5, 0xfe, 0xdd, 0xff, 0xff, 0x5d, 0xd5, 0xd5,
    0xd0, 0x67, 0x7f, 0xff, 0xff, 0xfc, 0xcc, 0x33,
    0x9f, 0x3f, 0x3f, 0xfe, 0x65, 0xd0,

    /* U+516D "六" */
    0x0, 0x0, 0xff, 0x0, 0x9d, 0x47, 0x9d, 0x0,
    0x0, 0x7f, 0xf2, 0x9d, 0xff, 0xff, 0xd7, 0xa0,
    0x0, 0x1f, 0xfc, 0xa1, 0x4f, 0x5f, 0xff, 0xf1,
    0xf0, 0x0, 0x7, 0xff, 0x2a, 0x47, 0xff, 0xfd,
    0x78, 0x0, 0x1, 0xff, 0xca, 0x1e, 0xfc, 0xff,
    0xff, 0x1a, 0x80, 0x0, 0x7f, 0xf2, 0xab, 0xbf,
    0xff, 0xd4, 0xa0, 0x0, 0x1f, 0xfc, 0xa4, 0xcd,
    0x57, 0x31, 0x60, 0x0, 0xf, 0xf1, 0x6c, 0xbc,
    0xbf, 0xfd, 0x33, 0x31, 0x2f, 0x2f, 0xff, 0x3d,
    0xa5, 0xff, 0xff, 0xff, 0xf3, 0x33, 0xd2, 0xff,
    0xff, 0xff, 0xf9, 0x99, 0xe1, 0x44, 0x64, 0x7f,
    0xfc, 0xc1, 0xd0, 0x0, 0xf, 0xfe, 0xf8, 0x8,
    0x58, 0x0, 0x7, 0xff, 0xa, 0x5e, 0xc1, 0x80,
    0x4c, 0x0, 0x3, 0x1, 0xad, 0x69, 0xdc, 0x0,
    0x0, 0x7f, 0xf0, 0x49, 0x7f, 0x3f, 0xff, 0xc9,
    0x40, 0x0, 0x18, 0x43, 0x93, 0xff, 0xfc, 0xd4,
    0x0, 0x1, 0xff, 0xc0, 0xa1, 0xff, 0xff, 0x62,
    0x0, 0x0, 0x79, 0x2f, 0xff, 0xfd, 0xea, 0x4c,
    0x0, 0x1, 0xfe, 0x30, 0xfc, 0xff, 0xff, 0x1f,
    0x80, 0x0, 0x7d, 0x41, 0xff, 0xfe, 0xc8, 0x3,
    0x0, 0x0, 0xfc, 0x3, 0x8d, 0xff, 0xfe, 0xb4,
    0x0, 0x0, 0xfc, 0x21, 0xcd, 0xff, 0xfe, 0x7c,
    0x0, 0x0, 0xfc, 0xc3, 0xff, 0xfe, 0xf8, 0x23,
    0x0, 0x0, 0xfe, 0x51, 0xff, 0xff, 0x7d, 0x19,
    0x0, 0x0, 0x78, 0x6f, 0xb7, 0xff, 0xfd, 0x4,
    0x0, 0x1, 0xff, 0x55, 0x7f, 0xff, 0xb4, 0x41,
    0x40, 0x0, 0x30, 0xd, 0xef, 0xff, 0xfb, 0x74,
    0x24, 0x0, 0x3, 0xfe, 0x17, 0xef, 0xff, 0xff,
    0x40, 0x80, 0x0, 0x67, 0x6f, 0xff, 0xf7, 0xf1,
    0xf0, 0x0, 0x7, 0xff, 0x5, 0xa3, 0xff, 0xfd,
    0xf6, 0x60, 0x0, 0x0, 0x4b, 0xfc, 0xff, 0xff,
    0x47, 0x80, 0x0, 0x7f, 0xf0, 0x80, 0xb2, 0x7f,
    0xff, 0xd9, 0x20, 0x46, 0x3e, 0x7f, 0xff, 0xed,
    0x50, 0x90, 0x0, 0xf, 0xfe, 0x19, 0x9f, 0xf7,
    0xff, 0xf9, 0xa4, 0xeb, 0x67, 0xff, 0xcc, 0xa0,
    0x0, 0x3, 0xff, 0x8b, 0x47, 0xff, 0xda, 0xce,
    0x0, 0x11, 0x28, 0xac, 0x0, 0x1, 0xff, 0xc6,
    0x1e, 0x86, 0x10, 0x0,

    /* U+56DB "四" */
    0x8, 0xb, 0xb, 0xff, 0xe5, 0x4, 0x55, 0xff,
    0xff, 0xff, 0xf2, 0xac, 0xea, 0xff, 0xff, 0xff,
    0xf9, 0x56, 0x75, 0x7f, 0xff, 0xe8, 0x17, 0xf7,
    0xfa, 0xdb, 0xff, 0xfd, 0x24, 0xfe, 0xfe, 0xb7,
    0xff, 0xff, 0x43, 0xbf, 0xbf, 0xd1, 0x3f, 0xff,
    0xeb, 0x3a, 0xbf, 0xff, 0xf0, 0x18, 0x0, 0x4,
    0xe7, 0xff, 0xfe, 0x1e, 0x0, 0x0, 0x37, 0xff,
    0xff, 0x83, 0xc0, 0x0, 0x21, 0x3f, 0xff, 0xf5,
    0x9d, 0x5f, 0xff, 0xf8, 0xc, 0x0, 0x2, 0x7a,
    0xff, 0xff, 0xb, 0x0, 0x0, 0x1b, 0xff, 0xff,
    0xc1, 0xe0, 0x0, 0x10, 0x9f, 0xff, 0xfa, 0xce,
    0xaf, 0xff, 0xfc, 0x6, 0x0, 0x1, 0x44, 0xff,
    0xff, 0x82, 0x0, 0x0, 0xd, 0xff, 0xff, 0xe0,
    0xf0, 0x0, 0x8, 0x4f, 0xff, 0xfd, 0x67, 0x57,
    0xff, 0xfe, 0x3, 0x0, 0x0, 0xa6, 0xff, 0xfd,
    0x40, 0x0, 0x26, 0xff, 0xff, 0xf0, 0x78, 0x0,
    0x4, 0x27, 0xff, 0xfe, 0xb3, 0xab, 0xff, 0xff,
    0x1, 0x80, 0x0, 0x58, 0x7f, 0xfb, 0x60, 0x0,
    0x13, 0x7f, 0xff, 0xf8, 0x3c, 0x0, 0x2, 0x13,
    0xff, 0xff, 0x59, 0xd5, 0xff, 0xff, 0x80, 0xc0,
    0x0, 0x0, 0x3e, 0x5f, 0xf5, 0x20, 0x0, 0x13,
    0x7f, 0xff, 0xf8, 0x3c, 0x0, 0x2, 0x13, 0xff,
    0xff, 0x59, 0xd5, 0xff, 0xff, 0x80, 0xc0, 0x0,
    0x4, 0x7f, 0xff, 0xe7, 0x50, 0x0, 0x9, 0xbf,
    0xff, 0xfc, 0x1e, 0x0, 0x1, 0x9, 0xff, 0xff,
    0xac, 0xea, 0xff, 0xff, 0xc0, 0x60, 0x0, 0x8,
    0xbf, 0xff, 0xf2, 0x10, 0x0, 0x4, 0xdd, 0xff,
    0xfe, 0x12, 0x0, 0x0, 0x84, 0xff, 0xff, 0xd6,
    0x75, 0x7f, 0xff, 0xe0, 0x30, 0x1, 0xff, 0x8f,
    0xfe, 0xe0, 0xa0, 0x0, 0x9, 0x7b, 0xff, 0xfc,
    0xbc, 0x4e, 0x4e, 0x2c, 0x4b, 0xff, 0xff, 0x59,
    0xd5, 0xff, 0xff, 0x80, 0xc2, 0xaf, 0x3f, 0xff,
    0xd0, 0xa0, 0x0, 0x18, 0xb3, 0xff, 0xff, 0xde,
    0x7f, 0xff, 0xeb, 0x3a, 0xbf, 0xff, 0xf1, 0xc6,
    0x77, 0xff, 0xfb, 0x64, 0x28, 0x0, 0x3, 0xa0,
    0x3c, 0x3f, 0xff, 0xf7, 0xd7, 0xff, 0xfa, 0xce,
    0xaf, 0xff, 0xfc, 0xef, 0xff, 0xfe, 0xe1, 0x25,
    0x0, 0x0, 0xfc, 0x1a, 0x1e, 0x1e, 0xe, 0x17,
    0xff, 0xff, 0x59, 0xd5, 0xff, 0xff, 0x80, 0xeb,
    0xeb, 0xc3, 0x20, 0x0, 0x1f, 0xfc, 0x11, 0x3f,
    0xff, 0xf5, 0x9d, 0x5f, 0xff, 0xf8, 0xc, 0x20,
    0x0, 0x3, 0xff, 0x86, 0x27, 0xff, 0xfe, 0xb3,
    0xab, 0xff, 0xff, 0x7, 0x85, 0x85, 0xff, 0xf1,
    0x7, 0xff, 0xff, 0xd6, 0x75, 0x7f, 0xff, 0xff,
    0xfc, 0xab, 0x3a, 0xbf, 0xff, 0xff, 0xfe, 0x55,
    0x9d, 0x5f, 0xff, 0xfa, 0x5, 0xfd, 0xff, 0xff,
    0x89, 0x13, 0xff, 0xfe, 0xb3, 0xab, 0xff, 0xff,
    0x1, 0x80, 0x0, 0x7f, 0xf1, 0x4, 0xff, 0xff,
    0xd6, 0x6c, 0xd2, 0xf2, 0xe0, 0x20, 0x0, 0xf,
    0xfe, 0x20, 0x3a, 0xfa, 0xf9, 0xc,

    /* U+65E5 "日" */
    0x14, 0xbb, 0xbb, 0xff, 0xe3, 0x49, 0xd, 0xff,
    0xff, 0xff, 0xf1, 0xb1, 0xc6, 0xff, 0xff, 0xdf,
    0x7e, 0x7e, 0x7f, 0xfc, 0xf, 0x4f, 0xff, 0xf6,
    0x38, 0xdf, 0xff, 0xfa, 0x6c, 0x0, 0x3, 0xff,
    0x80, 0x27, 0xff, 0xfe, 0xc7, 0x1b, 0xff, 0xff,
    0x4d, 0x80, 0x0, 0x7f, 0xf0, 0x4, 0xff, 0xff,
    0xd8, 0xe3, 0x7f, 0xff, 0xe9, 0xb0, 0x0, 0xf,
    0xfe, 0x0, 0x9f, 0xff, 0xfb, 0x1c, 0x6f, 0xff,
    0xfd, 0x36, 0x0, 0x1, 0xff, 0xc0, 0x13, 0xff,
    0xff, 0x63, 0x8d, 0xff, 0xff, 0xa6, 0xc0, 0x0,
    0x3f, 0xf8, 0x2, 0x7f, 0xff, 0xec, 0x71, 0xbf,
    0xff, 0xf4, 0xd8, 0x0, 0x7, 0xff, 0x0, 0x4f,
    0xff, 0xfd, 0x8e, 0x37, 0xff, 0xfe, 0xa0, 0xb,
    0xb, 0xff, 0xe0, 0xf, 0xff, 0xff, 0xb1, 0xc6,
    0xff, 0xff, 0xff, 0xf8, 0xd8, 0xe3, 0x7f, 0xff,
    0xff, 0xfc, 0x6c, 0x71, 0xbf, 0xff, 0xf6, 0xbc,
    0xbc, 0xbf, 0xff, 0x2, 0x83, 0xff, 0xfd, 0x8e,
    0x37, 0xff, 0xfe, 0x9b, 0x0, 0x0, 0xff, 0xe0,
    0x9, 0xff, 0xff, 0xb1, 0xc6, 0xff, 0xff, 0xd3,
    0x60, 0x0, 0x1f, 0xfc, 0x1, 0x3f, 0xff, 0xf6,
    0x38, 0xdf, 0xff, 0xfa, 0x6c, 0x0, 0x3, 0xff,
    0x80, 0x27, 0xff, 0xfe, 0xc7, 0x1b, 0xff, 0xff,
    0x4d, 0x80, 0x0, 0x7f, 0xf0, 0x4, 0xff, 0xff,
    0xd8, 0xe3, 0x7f, 0xff, 0xe9, 0xb0, 0x0, 0xf,
    0xfe, 0x0, 0x9f, 0xff, 0xfb, 0x1c, 0x6f, 0xff,
    0xfd, 0x36, 0x0, 0x1, 0xff, 0xc0, 0x13, 0xff,
    0xff, 0x63, 0x8d, 0xff, 0xff, 0xb6, 0xa7, 0xe7,
    0xff, 0xf8, 0x14, 0xff, 0xff, 0xec, 0x71, 0xbf,
    0xff, 0xff, 0xfe, 0x36, 0x38, 0xdf, 0xff, 0xff,
    0xff, 0x1b, 0x1c, 0x6f, 0xff, 0xfd, 0x40, 0x16,
    0x17, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0x63, 0x8d,
    0xff, 0xff, 0xa6, 0xc0, 0x0, 0x3f, 0xf8, 0x2,
    0x3c, 0x7c, 0x6b, 0x20,

    /* U+661F "星" */
    0x0, 0x0, 0x8c, 0x71, 0xf1, 0xff, 0xf8, 0xd0,
    0x0, 0x0, 0x1e, 0x3f, 0xff, 0xff, 0xff, 0xe3,
    0x51, 0x80, 0x0, 0x78, 0xff, 0xff, 0xfd, 0x14,
    0x8e, 0x8f, 0xff, 0xc0, 0x56, 0xff, 0xff, 0x51,
    0x80, 0x0, 0x78, 0xff, 0xff, 0xfc, 0xb6, 0x0,
    0x1, 0xff, 0xc0, 0x13, 0xff, 0xff, 0x51, 0x80,
    0x0, 0x78, 0xff, 0xff, 0xfd, 0x9f, 0x67, 0x67,
    0xff, 0xc0, 0xb9, 0xff, 0xff, 0x51, 0x80, 0x0,
    0x78, 0xff, 0xff, 0xff, 0xff, 0x8d, 0x46, 0x0,
    0x1, 0xe3, 0xff, 0xff, 0xf4, 0x3a, 0x1a, 0x1f,
    0xff, 0x1, 0x4b, 0xff, 0xfd, 0x46, 0x0, 0x1,
    0xe3, 0xff, 0xff, 0xf2, 0xd8, 0x0, 0x7, 0xff,
    0x0, 0x4f, 0xff, 0xfd, 0x46, 0x0, 0x1, 0xe3,
    0xff, 0xff, 0xf4, 0x11, 0xd9, 0xdf, 0xff, 0x1,
    0x2f, 0xff, 0xfd, 0x46, 0x0, 0x1, 0xe3, 0xff,
    0xff, 0xff, 0xfe, 0x35, 0x18, 0x0, 0x7, 0x8c,
    0xf3, 0xfc, 0x3b, 0x75, 0xf3, 0xf3, 0xed, 0x2e,
    0x3e, 0x36, 0xe6, 0x7e, 0x7f, 0xd0, 0xa0, 0x0,
    0x1f, 0xf, 0xf9, 0xff, 0xe1, 0x0, 0x0, 0x43,
    0xff, 0xff, 0xe9, 0xb0, 0x0, 0xf, 0xfe, 0x1d,
    0xc7, 0xff, 0xf8, 0xf4, 0x0, 0x2, 0x1f, 0xff,
    0xff, 0x4d, 0x80, 0x0, 0x7f, 0xf0, 0x97, 0xff,
    0xff, 0xef, 0x3f, 0x3d, 0xeb, 0xff, 0xfe, 0xfb,
    0xf3, 0xf3, 0xfd, 0x66, 0x0, 0x1, 0x8b, 0xfc,
    0x3f, 0xff, 0xff, 0xf8, 0xf7, 0x60, 0x0, 0x11,
    0x57, 0x47, 0xff, 0xe3, 0x1a, 0x3a, 0x3f, 0x2f,
    0x7f, 0xff, 0xae, 0x11, 0xd1, 0xff, 0x1a, 0x0,
    0x0, 0xe, 0xbc, 0x7f, 0xff, 0xce, 0xc0, 0x0,
    0x1e, 0x1f, 0xff, 0xff, 0x4d, 0x80, 0x0, 0x7f,
    0xc1, 0x33, 0xbf, 0xf3, 0xe3, 0x24, 0x64, 0x7e,
    0x3f, 0xff, 0xff, 0x55, 0x11, 0x91, 0xfc, 0x22,
    0x0, 0x1, 0xca, 0xa0, 0x75, 0xff, 0xff, 0xff,
    0xfc, 0x57, 0xf0, 0x0, 0xf, 0xa9, 0xfc, 0xfc,
    0xfd, 0xeb, 0xff, 0xfe, 0xfb, 0xf3, 0xf3, 0xf9,
    0xe4, 0x0, 0x3, 0xff, 0x84, 0x3f, 0xff, 0xfe,
    0x9b, 0x0, 0x0, 0xff, 0xe5, 0xf, 0xff, 0xff,
    0xa6, 0xc0, 0x0, 0x3f, 0xe1, 0x2e, 0x7e, 0x7f,
    0xf7, 0x57, 0xff, 0xfb, 0xdb, 0x9f, 0x9f, 0xfc,
    0xe6, 0x27, 0xff, 0xff, 0xff, 0xcc, 0x7f, 0x7,
    0x63, 0x63, 0xff, 0xe6, 0x18, 0x80,

    /* U+671F "期" */
    0x0, 0x0, 0x8d, 0x61, 0xe1, 0xc0, 0x40, 0x0,
    0x12, 0x74, 0x3b, 0xb0, 0x0, 0x7, 0xff, 0x15,
    0x8f, 0xff, 0xfc, 0x6, 0x0, 0x1, 0x49, 0xff,
    0xef, 0x80, 0x0, 0x4d, 0xce, 0x6e, 0x7f, 0xc1,
    0x20, 0x0, 0x13, 0x1f, 0xff, 0xf8, 0xc, 0x0,
    0x2, 0x93, 0xff, 0xdf, 0x0, 0x0, 0xbc, 0xff,
    0xff, 0xff, 0x84, 0xc0, 0x4, 0xc6, 0xdd, 0x7f,
    0xff, 0xc3, 0xe3, 0x63, 0x74, 0xff, 0xff, 0x18,
    0xd8, 0xc0, 0x7, 0x9f, 0xff, 0xff, 0xf0, 0x98,
    0x5, 0x7f, 0xff, 0xff, 0xff, 0x3, 0x6c, 0x3,
    0xcf, 0xfe, 0x4c, 0x5c, 0x5f, 0x45, 0xff, 0xff,
    0x84, 0xc0, 0x2b, 0xff, 0xff, 0xff, 0xf8, 0x1b,
    0x60, 0x1e, 0x7f, 0xf0, 0xe0, 0x0, 0x19, 0xff,
    0xff, 0xfc, 0x26, 0x0, 0x4c, 0x6f, 0xd, 0xff,
    0xfe, 0x3b, 0x37, 0x37, 0xaa, 0xff, 0xf9, 0x8d,
    0xcc, 0x0, 0x3c, 0xff, 0xe1, 0xc0, 0x0, 0x33,
    0xff, 0xff, 0xf8, 0x4c, 0x0, 0x2, 0x63, 0xff,
    0xff, 0x1, 0x80, 0x0, 0x52, 0x7f, 0xfb, 0xe0,
    0x0, 0x17, 0x9f, 0xfc, 0x38, 0x0, 0x6, 0x7f,
    0xff, 0xff, 0x9, 0x80, 0x0, 0x4c, 0x7f, 0xff,
    0xea, 0xda, 0xba, 0xbb, 0x73, 0xff, 0x7c, 0x0,
    0x2, 0xf3, 0xff, 0xfa, 0xf3, 0xf3, 0xdf, 0x3f,
    0xff, 0xe1, 0x30, 0x0, 0x9, 0x8f, 0xff, 0xff,
    0xf6, 0xf8, 0x0, 0x5, 0xe7, 0xff, 0xff, 0xfc,
    0x26, 0x0, 0x1, 0x31, 0xff, 0xff, 0x9a, 0x99,
    0xd9, 0xeb, 0xff, 0xfd, 0xf0, 0x0, 0xb, 0xcf,
    0xfe, 0xe1, 0x9d, 0x9f, 0x59, 0xff, 0xff, 0x84,
    0xc0, 0x0, 0x26, 0x3f, 0xff, 0xf0, 0x18, 0x0,
    0x5, 0x27, 0xff, 0xbe, 0x0, 0x1, 0x7a, 0x7f,
    0xc3, 0x80, 0x0, 0x67, 0xff, 0xff, 0xf0, 0x98,
    0x0, 0x4, 0xc7, 0xff, 0xfe, 0x27, 0x23, 0x23,
    0xa8, 0xff, 0xf7, 0xc0, 0x0, 0x2f, 0x8f, 0xf8,
    0x40, 0x0, 0xc, 0xff, 0xff, 0xfe, 0x13, 0x0,
    0x0, 0x98, 0xff, 0xff, 0xff, 0x6f, 0x80, 0x0,
    0x5f, 0xbf, 0xf0, 0x0, 0x0, 0x19, 0xff, 0xff,
    0xfc, 0x26, 0x0, 0x1, 0x31, 0xff, 0xff, 0xbd,
    0x3c, 0xfc, 0xef, 0xaf, 0xfd, 0xf0, 0x0, 0x0,
    0x17, 0xff, 0xfa, 0x9d, 0x4d, 0x4f, 0x54, 0xff,
    0xff, 0x84, 0xc0, 0x0, 0x26, 0x3f, 0xff, 0xf0,
    0x18, 0x0, 0x5, 0x27, 0xff, 0xbe, 0x0, 0x0,
    0x12, 0xff, 0xff, 0xff, 0x9, 0x80, 0x0, 0x4c,
    0x7f, 0xff, 0xe0, 0x30, 0x0, 0xa, 0x4f, 0xff,
    0x7c, 0x0, 0x0, 0x53, 0xff, 0xfe, 0xd9, 0xc7,
    0xc7, 0xdc, 0x7f, 0xff, 0xe1, 0x30, 0x3f, 0x3f,
    0x37, 0xc7, 0xff, 0xfb, 0xd3, 0xcf, 0xce, 0xfa,
    0xff, 0xfe, 0xf3, 0xbe, 0x40, 0xff, 0xff, 0x1a,
    0x80, 0x0, 0x67, 0xff, 0xff, 0xf0, 0x98, 0x1f,
    0xff, 0xff, 0xff, 0x7, 0x1d, 0x7b, 0xff, 0xfc,
    0x1a, 0x0, 0x1, 0x9f, 0xff, 0xff, 0xc2, 0x60,
    0x2b, 0xeb, 0xf3, 0x7b, 0x22, 0xfa, 0xfe, 0x77,
    0x60, 0x5f, 0x5f, 0x25, 0x4a, 0x7f, 0xf0, 0x80,
    0x0, 0x73, 0xff, 0xff, 0xf8, 0x4c, 0x0, 0x2,
    0x1, 0xc3, 0xf0, 0xac, 0x8, 0xa, 0x8d, 0xf8,
    0x6e, 0x0, 0x0, 0xb3, 0x3f, 0xee, 0x0, 0x0,
    0x39, 0xff, 0xff, 0xfc, 0x26, 0x0, 0x1, 0x32,
    0x7f, 0xff, 0xa4, 0x0, 0x0, 0xae, 0x7f, 0xfe,
    0xd0, 0x80, 0x3, 0x3e, 0xff, 0xe3, 0x80, 0x0,
    0x39, 0xff, 0xff, 0xfc, 0x26, 0x0, 0x0, 0x25,
    0xed, 0xff, 0xe5, 0xd, 0x0, 0x0, 0xa, 0x71,
    0x7f, 0xf2, 0x88, 0xb6, 0x7f, 0xff, 0x91, 0xc0,
    0x0, 0x3a, 0x3, 0xff, 0xfc, 0x26, 0x0, 0x49,
    0xcb, 0xff, 0xfe, 0x51, 0x0, 0x0, 0xc8, 0x9f,
    0xff, 0xe9, 0xcd, 0xbf, 0xff, 0x0, 0x50, 0x0,
    0xf7, 0xf7, 0xc7, 0xbd, 0xf, 0xff, 0x90, 0x30,
    0x2c, 0xcf, 0xff, 0xf4, 0x40, 0x0, 0x7, 0xa9,
    0x67, 0x53, 0x7f, 0xbf, 0xe4, 0x80, 0x0, 0x2d,
    0x2f, 0xff, 0xfd, 0x88, 0x0, 0x0, 0x13, 0xb3,
    0x9d, 0x1, 0x0, 0x0, 0xf0, 0x8, 0x0, 0x0,
    0xf7, 0x7c, 0x6c, 0x0, 0x2, 0x8c, 0xff, 0xfa,
    0xdd, 0xa0, 0x18, 0x0, 0x0, 0x80, 0x40, 0x40,
    0x0, 0x1f, 0xf0, 0x40, 0x0, 0x7, 0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 255, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 255, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 255, .box_w = 16, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 255, .box_w = 15, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1234, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1472, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1881, .adv_w = 255, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2121, .adv_w = 448, .box_w = 26, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 2146, .adv_w = 448, .box_w = 26, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2244, .adv_w = 448, .box_w = 26, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2324, .adv_w = 448, .box_w = 26, .box_h = 22, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2586, .adv_w = 448, .box_w = 26, .box_h = 26, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2886, .adv_w = 448, .box_w = 24, .box_h = 24, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 3284, .adv_w = 448, .box_w = 20, .box_h = 24, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 3544, .adv_w = 448, .box_w = 26, .box_h = 25, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3862, .adv_w = 448, .box_w = 27, .box_h = 27, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x9, 0x8c, 0x94, 0x36d, 0x8db, 0x17e5, 0x181f,
    0x191f
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 19968, .range_length = 6432, .glyph_id_start = 11,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 9, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 8,
    .kern_classes = 0,
    .bitmap_format = 2,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_SansDate = {
#else
lv_font_t ui_font_SansDate = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 27,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_SANSDATE*/

