/*******************************************************************************
 * Size: 18 px
 * Bpp: 8
 * Opts: --bpp 8 --size 18 --no-compress --font iconfont.ttf --range 59283,60167 --format lvgl -o main_symbol2.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef MAIN_SYMBOL2
#define MAIN_SYMBOL2 1
#endif

#if MAIN_SYMBOL2

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E793 "" */
    0x6, 0x34, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37,
    0x37, 0x37, 0x37, 0x33, 0x6, 0x0, 0xb9, 0xee,
    0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7, 0xe7,
    0xe7, 0xef, 0xb7, 0x0, 0xef, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x34,
    0xeb, 0x0, 0xef, 0x2f, 0x0, 0xd, 0xf, 0xf,
    0xf, 0xf, 0xf, 0xb, 0x0, 0x33, 0xeb, 0x0,
    0xef, 0x2f, 0x2f, 0xfe, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf9, 0x14, 0x33, 0xeb, 0x0, 0xef, 0x2f,
    0x0, 0xd, 0xf, 0xf, 0xf, 0xf, 0xf, 0xb,
    0x0, 0x33, 0xeb, 0x0, 0xef, 0x2f, 0x0, 0xd,
    0xf, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0x33,
    0xeb, 0x0, 0xef, 0x2f, 0x2f, 0xfe, 0xff, 0x8e,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x31, 0xe9, 0x0,
    0xef, 0x2f, 0x0, 0xd, 0xf, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3, 0x32, 0x0, 0xef, 0x2f,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0x8a,
    0xca, 0xb1, 0x28, 0x0, 0xef, 0x2f, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x60, 0xd3, 0x35, 0x87,
    0xc5, 0x0, 0xef, 0x2f, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x48, 0xf8, 0x9e, 0x5f, 0x47, 0x0,
    0xef, 0x2f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x4d, 0xac, 0xf0, 0xbf, 0x0, 0xef, 0x2f,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5c, 0x63,
    0x0, 0x16, 0xff, 0x15, 0xed, 0x55, 0x2b, 0x2b,
    0x2b, 0x2b, 0x2b, 0x18, 0x44, 0xf6, 0xa8, 0xc5,
    0xbf, 0x1, 0x85, 0xf0, 0xf3, 0xf3, 0xf3, 0xf3,
    0xf3, 0xbf, 0x0, 0x25, 0x5d, 0x47, 0x6, 0x0,

    /* U+EB07 "" */
    0x0, 0x0, 0x10, 0x30, 0x0, 0x6, 0x70, 0x83,
    0x15, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x68, 0x4a, 0x0, 0x0, 0x9d, 0x87, 0x0, 0x7e,
    0x41, 0x20, 0x9e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6b, 0xff, 0xcd, 0x0, 0x4c, 0x84, 0x87,
    0x0, 0x9b, 0x0, 0x0, 0x4d, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3c, 0xfb, 0xff, 0xcf, 0x10, 0xad,
    0x16, 0x87, 0x0, 0x9b, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xb4, 0xff, 0xff, 0xcf,
    0x4f, 0xa8, 0xa0, 0xcf, 0x34, 0x9b, 0x11, 0x96,
    0xac, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcb, 0xff,
    0xff, 0xcf, 0x0, 0x0, 0x13, 0x87, 0x0, 0x98,
    0xa, 0x0, 0x9e, 0x0, 0x0, 0xf, 0x99, 0x3c,
    0xcb, 0xff, 0xff, 0xcf, 0x0, 0x0, 0x10, 0x7f,
    0x0, 0x2b, 0xa9, 0xa3, 0x5a, 0x0, 0xe, 0xc8,
    0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa3, 0xff, 0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe6, 0xff, 0xff, 0xa7, 0xcb, 0xff,
    0xff, 0xcf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6, 0x61, 0xe, 0xeb, 0xff, 0xff, 0xa7,
    0xcb, 0xff, 0xff, 0xcf, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9b, 0xff, 0x71, 0xeb, 0xff,
    0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x65, 0xff, 0xff, 0x77,
    0xeb, 0xff, 0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xf2, 0xff,
    0xff, 0x77, 0xeb, 0xff, 0xff, 0xa7, 0xcb, 0xff,
    0xff, 0xcf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x13,
    0xff, 0xff, 0xff, 0x77, 0xeb, 0xff, 0xff, 0xa7,
    0xcb, 0xff, 0xff, 0xcf, 0x0, 0x0, 0x4, 0x84,
    0x48, 0x13, 0xff, 0xff, 0xff, 0x77, 0xeb, 0xff,
    0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf, 0x0, 0x4,
    0xab, 0xff, 0xc1, 0x13, 0xff, 0xff, 0xff, 0x77,
    0xeb, 0xff, 0xff, 0xa7, 0xcb, 0xff, 0xff, 0xcf,
    0x0, 0x98, 0xff, 0xff, 0xc3, 0x13, 0xff, 0xff,
    0xff, 0x77, 0xeb, 0xff, 0xff, 0xa7, 0xcb, 0xff,
    0xff, 0xcf, 0x0, 0x8a, 0xe7, 0xe7, 0x81, 0x5,
    0xd1, 0xf3, 0xee, 0x45, 0xb0, 0xf3, 0xf2, 0x70,
    0x91, 0xf3, 0xf3, 0x94
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 288, .box_w = 14, .box_h = 16, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 224, .adv_w = 288, .box_w = 18, .box_h = 18, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x374
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 59283, .range_length = 885, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 8,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t main_symbol2 = {
#else
lv_font_t main_symbol2 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if MAIN_SYMBOL2*/

