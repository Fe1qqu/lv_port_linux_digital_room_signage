﻿/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font Montserrat-Medium.ttf --range 32-127,176,8226,1040-1103,1105 --format lvgl -o lv_font_my_montserrat_14.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef LV_FONT_MY_MONTSERRAT_14
#define LV_FONT_MY_MONTSERRAT_14 1
#endif

#if LV_FONT_MY_MONTSERRAT_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xa8, 0xf0,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x11, 0x11, 0x3f, 0xe4, 0x42, 0x21, 0x13, 0xfe,
    0x44, 0x66, 0x22, 0x0,

    /* U+0024 "$" */
    0x10, 0x20, 0x43, 0xed, 0x12, 0x24, 0x38, 0x1c,
    0x24, 0x4c, 0xb7, 0xc2, 0x4, 0x0,

    /* U+0025 "%" */
    0x70, 0x91, 0x22, 0x24, 0x45, 0x7, 0x5c, 0xc,
    0x42, 0x88, 0x91, 0x12, 0x24, 0x38,

    /* U+0026 "&" */
    0x38, 0x44, 0x44, 0x68, 0x30, 0x59, 0x8d, 0x86,
    0xc7, 0x7d,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x4b, 0x49, 0x24, 0x92, 0x64, 0x80,

    /* U+0029 ")" */
    0x49, 0x12, 0x49, 0x24, 0xa4, 0x80,

    /* U+002A "*" */
    0x25, 0x5d, 0xf2, 0x0,

    /* U+002B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+002C "," */
    0xfe,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x46, 0x21, 0x18, 0x84, 0x62, 0x11, 0x88,
    0x40,

    /* U+0030 "0" */
    0x3c, 0x42, 0xc3, 0x81, 0x81, 0x81, 0x81, 0xc3,
    0x42, 0x3c,

    /* U+0031 "1" */
    0xe4, 0x92, 0x49, 0x24,

    /* U+0032 "2" */
    0x79, 0x18, 0x10, 0x20, 0xc3, 0x4, 0x10, 0x41,
    0xfc,

    /* U+0033 "3" */
    0xfc, 0x8, 0x20, 0xc3, 0xc1, 0xc0, 0x81, 0x87,
    0xf0,

    /* U+0034 "4" */
    0x4, 0x6, 0x6, 0x6, 0x6, 0x22, 0x13, 0xfe,
    0x4, 0x2, 0x1, 0x0,

    /* U+0035 "5" */
    0x7e, 0x81, 0x2, 0x7, 0xc0, 0xc0, 0x81, 0xc6,
    0xf8,

    /* U+0036 "6" */
    0x3e, 0x83, 0x4, 0xb, 0xd8, 0xe0, 0xc1, 0x46,
    0x78,

    /* U+0037 "7" */
    0xff, 0x82, 0x86, 0x4, 0xc, 0x8, 0x18, 0x10,
    0x30, 0x20,

    /* U+0038 "8" */
    0x3c, 0x42, 0x42, 0x42, 0x3c, 0xc3, 0x81, 0x81,
    0xc3, 0x3c,

    /* U+0039 "9" */
    0x79, 0x8a, 0xc, 0x1c, 0x6f, 0x40, 0x83, 0x5,
    0xf0,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0xf, 0xe0,

    /* U+003C "<" */
    0x2, 0x1c, 0xe6, 0xe, 0x3, 0x81, 0x80,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x1, 0xc0, 0xe0, 0x71, 0xce, 0x20, 0x0,

    /* U+003F "?" */
    0x7d, 0x8c, 0x8, 0x10, 0xc3, 0x4, 0x0, 0x10,
    0x20,

    /* U+0040 "@" */
    0xf, 0x81, 0x83, 0x19, 0xdc, 0x91, 0xa9, 0x4,
    0xc8, 0x26, 0x41, 0x32, 0x9, 0x88, 0xca, 0x3b,
    0x98, 0x0, 0x60, 0x0, 0xf8, 0x0,

    /* U+0041 "A" */
    0xc, 0x3, 0x1, 0xa0, 0x48, 0x31, 0x8, 0x43,
    0xf9, 0x2, 0x40, 0xf0, 0x10,

    /* U+0042 "B" */
    0xfe, 0x83, 0x81, 0x83, 0xfe, 0x83, 0x81, 0x81,
    0x83, 0xfe,

    /* U+0043 "C" */
    0x1e, 0x30, 0x90, 0x10, 0x8, 0x4, 0x2, 0x0,
    0x80, 0x61, 0xf, 0x0,

    /* U+0044 "D" */
    0xfc, 0x41, 0xa0, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x2, 0x83, 0x7e, 0x0,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0xf, 0xd0, 0x20, 0x40, 0x81,
    0xfc,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x0,

    /* U+0047 "G" */
    0x1f, 0x30, 0xd0, 0x10, 0x8, 0x4, 0x6, 0x2,
    0x81, 0x60, 0x8f, 0x80,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81,
    0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xc0,

    /* U+004A "J" */
    0x7c, 0x10, 0x41, 0x4, 0x10, 0x41, 0x45, 0xe0,

    /* U+004B "K" */
    0x82, 0x86, 0x8c, 0x98, 0xb0, 0xf8, 0xc8, 0x8c,
    0x86, 0x83,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xf0,

    /* U+004D "M" */
    0x80, 0x70, 0x3c, 0xf, 0x87, 0xb3, 0x64, 0x99,
    0xe6, 0x31, 0x8c, 0x60, 0x10,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xb1, 0x99, 0x99, 0x8d, 0x87,
    0x83, 0x81,

    /* U+004F "O" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x5, 0x2, 0x61, 0x87, 0x80,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80,

    /* U+0051 "Q" */
    0x1e, 0xc, 0x31, 0x2, 0x40, 0x28, 0x5, 0x0,
    0xa0, 0x12, 0x4, 0x61, 0x87, 0xe0, 0x19, 0x1,
    0xe0,

    /* U+0052 "R" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x83, 0xfe, 0x86,
    0x82, 0x81,

    /* U+0053 "S" */
    0x7d, 0x82, 0x4, 0x7, 0x7, 0x81, 0x81, 0x86,
    0xf8,

    /* U+0054 "T" */
    0xff, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8,
    0x8, 0x8,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+0056 "V" */
    0xc0, 0xd0, 0x26, 0x19, 0x84, 0x21, 0xc, 0xc1,
    0x20, 0x78, 0xc, 0x3, 0x0,

    /* U+0057 "W" */
    0x41, 0x82, 0x83, 0xd, 0x8e, 0x19, 0x16, 0x22,
    0x24, 0xc6, 0xc9, 0x85, 0x1a, 0xa, 0x1c, 0x1c,
    0x38, 0x10, 0x60,

    /* U+0058 "X" */
    0x41, 0xb1, 0x8c, 0x83, 0x80, 0xc0, 0xe0, 0x58,
    0x64, 0x61, 0x20, 0xc0,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x88, 0x86, 0x41, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x0,

    /* U+005A "Z" */
    0xff, 0x2, 0x6, 0xc, 0x18, 0x10, 0x30, 0x60,
    0x40, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+005C "\\" */
    0x41, 0x6, 0x8, 0x20, 0xc1, 0x4, 0x18, 0x20,
    0x82, 0x4, 0x10,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x93, 0xc0,

    /* U+005E "^" */
    0x30, 0xc6, 0x92, 0x4a, 0x10,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xcc,

    /* U+0061 "a" */
    0x7a, 0x10, 0x5f, 0x86, 0x18, 0xdf,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0xbc, 0xc2, 0x81, 0x81, 0x81,
    0x81, 0xc2, 0xbc,

    /* U+0063 "c" */
    0x3c, 0x8e, 0x4, 0x8, 0x10, 0x11, 0x9e,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x3d, 0x43, 0x81, 0x81, 0x81,
    0x81, 0x43, 0x3d,

    /* U+0065 "e" */
    0x38, 0x8a, 0xf, 0xf8, 0x18, 0x11, 0x1e,

    /* U+0066 "f" */
    0x39, 0x4, 0x3e, 0x41, 0x4, 0x10, 0x41, 0x4,
    0x0,

    /* U+0067 "g" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0x42, 0x7c,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xec, 0x70, 0x60, 0xc1, 0x83,
    0x6, 0x8,

    /* U+0069 "i" */
    0xdf, 0xe0,

    /* U+006A "j" */
    0x11, 0x1, 0x11, 0x11, 0x11, 0x11, 0x1e,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x29, 0x96, 0x3c, 0x68, 0x99,
    0x1a, 0x18,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xbc, 0xf6, 0x38, 0xe0, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0xc2, 0xbc,
    0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x7e, 0x8, 0x3c, 0x3c, 0x18, 0x7e,

    /* U+0074 "t" */
    0x41, 0xf, 0x90, 0x41, 0x4, 0x10, 0x40, 0xf0,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x71, 0xbd,

    /* U+0076 "v" */
    0xc3, 0x42, 0x42, 0x64, 0x24, 0x3c, 0x18, 0x18,

    /* U+0077 "w" */
    0xc2, 0x12, 0x30, 0x91, 0x4c, 0xca, 0x42, 0x92,
    0x14, 0x70, 0xe3, 0x2, 0x18,

    /* U+0078 "x" */
    0x42, 0x64, 0x3c, 0x18, 0x18, 0x2c, 0x64, 0x42,

    /* U+0079 "y" */
    0xc3, 0x42, 0x42, 0x64, 0x24, 0x3c, 0x18, 0x18,
    0x10, 0x10, 0xe0,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x21, 0x8c, 0x3f,

    /* U+007B "{" */
    0x69, 0x24, 0xa2, 0x49, 0x24, 0x40,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xc4, 0x44, 0x44, 0x34, 0x44, 0x44, 0x48,

    /* U+007E "~" */
    0x65, 0x38,

    /* U+00B0 "°" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0410 "А" */
    0xc, 0x3, 0x81, 0xa0, 0x4c, 0x11, 0x8, 0x43,
    0xf9, 0x82, 0x40, 0xf0, 0x10,

    /* U+0411 "Б" */
    0xff, 0x80, 0x80, 0x80, 0xfe, 0x83, 0x81, 0x81,
    0x83, 0xfe,

    /* U+0412 "В" */
    0xfc, 0x82, 0x82, 0x82, 0xfc, 0x83, 0x81, 0x81,
    0x83, 0xfe,

    /* U+0413 "Г" */
    0xfe, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0x0,

    /* U+0414 "Д" */
    0x3f, 0x84, 0x10, 0x82, 0x10, 0x42, 0x8, 0x41,
    0x8, 0x21, 0x4, 0x40, 0x9f, 0xfe, 0x0, 0xc0,
    0x18, 0x2,

    /* U+0415 "Е" */
    0xff, 0x2, 0x4, 0xf, 0xd0, 0x20, 0x40, 0x81,
    0xfc,

    /* U+0416 "Ж" */
    0xc2, 0x1a, 0x10, 0x88, 0x88, 0x64, 0xc1, 0xfc,
    0x19, 0x30, 0x88, 0x8c, 0x46, 0x42, 0x16, 0x10,
    0xc0,

    /* U+0417 "З" */
    0x7c, 0x6, 0x2, 0x2, 0x3c, 0x3, 0x1, 0x1,
    0xc3, 0x7c,

    /* U+0418 "И" */
    0x81, 0x83, 0x87, 0x8d, 0x89, 0x91, 0xb1, 0xe1,
    0xc1, 0x81,

    /* U+0419 "Й" */
    0x44, 0x24, 0x3c, 0x0, 0x81, 0x83, 0x87, 0x8d,
    0x89, 0x91, 0xb1, 0xe1, 0xc1, 0x81,

    /* U+041A "К" */
    0x82, 0x84, 0x8c, 0x98, 0xf0, 0x98, 0x8c, 0x84,
    0x86, 0x83,

    /* U+041B "Л" */
    0x3f, 0x90, 0x48, 0x24, 0x12, 0x9, 0x4, 0x82,
    0x41, 0x40, 0xe0, 0x40,

    /* U+041C "М" */
    0x80, 0x70, 0x3c, 0xf, 0x87, 0xb3, 0x64, 0x99,
    0xe6, 0x31, 0x8c, 0x60, 0x10,

    /* U+041D "Н" */
    0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81,
    0x81, 0x81,

    /* U+041E "О" */
    0x1e, 0x18, 0x64, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x5, 0x2, 0x61, 0x87, 0x80,

    /* U+041F "П" */
    0xff, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81,

    /* U+0420 "Р" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80,

    /* U+0421 "С" */
    0x1e, 0x30, 0x90, 0x10, 0x8, 0x4, 0x2, 0x0,
    0x80, 0x61, 0xf, 0x0,

    /* U+0422 "Т" */
    0xff, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8,
    0x8, 0x8,

    /* U+0423 "У" */
    0xc0, 0x90, 0x62, 0x10, 0x8c, 0x12, 0x5, 0x80,
    0xc0, 0x30, 0x8, 0x1c, 0x0,

    /* U+0424 "Ф" */
    0x4, 0x7, 0xf1, 0x93, 0x62, 0x38, 0x43, 0x8,
    0x61, 0xe, 0x23, 0x64, 0xc7, 0xf0, 0x10, 0x0,

    /* U+0425 "Х" */
    0x41, 0xb1, 0x8d, 0x83, 0x80, 0xc0, 0xe0, 0x58,
    0x64, 0x63, 0x20, 0xc0,

    /* U+0426 "Ц" */
    0x81, 0x20, 0x48, 0x12, 0x4, 0x81, 0x20, 0x48,
    0x12, 0x4, 0x81, 0x3f, 0xf0, 0x4, 0x1, 0x0,
    0x40,

    /* U+0427 "Ч" */
    0x81, 0x81, 0x81, 0x81, 0xc1, 0x7f, 0x1, 0x1,
    0x1, 0x1,

    /* U+0428 "Ш" */
    0x82, 0xc, 0x10, 0x60, 0x83, 0x4, 0x18, 0x20,
    0xc1, 0x6, 0x8, 0x30, 0x41, 0x82, 0xf, 0xff,
    0xc0,

    /* U+0429 "Щ" */
    0x82, 0x12, 0x8, 0x48, 0x21, 0x20, 0x84, 0x82,
    0x12, 0x8, 0x48, 0x21, 0x20, 0x84, 0x82, 0x13,
    0xff, 0xf0, 0x0, 0x40, 0x1, 0x0, 0x4,

    /* U+042A "Ъ" */
    0xf0, 0x2, 0x0, 0x40, 0xf, 0xc1, 0x6, 0x20,
    0x44, 0x8, 0x81, 0x10, 0x43, 0xf0,

    /* U+042B "Ы" */
    0x80, 0x30, 0x6, 0x0, 0xfe, 0x18, 0x33, 0x2,
    0x60, 0x4c, 0x9, 0x82, 0x3f, 0x84,

    /* U+042C "Ь" */
    0x80, 0x80, 0x80, 0xfc, 0x83, 0x81, 0x81, 0x81,
    0x82, 0xfc,

    /* U+042D "Э" */
    0x3c, 0x21, 0x80, 0x40, 0x31, 0xf8, 0x4, 0x6,
    0x2, 0x43, 0x1e, 0x0,

    /* U+042E "Ю" */
    0x83, 0xc4, 0x61, 0xa6, 0x5, 0x30, 0x1f, 0x0,
    0xc8, 0x6, 0x60, 0x31, 0x2, 0x8c, 0x34, 0x1e,
    0x0,

    /* U+042F "Я" */
    0x3f, 0x41, 0x81, 0x81, 0x81, 0xc1, 0x7f, 0x61,
    0x41, 0x81,

    /* U+0430 "а" */
    0x7a, 0x10, 0x5f, 0x86, 0x18, 0xdf,

    /* U+0431 "б" */
    0x3, 0x3e, 0x60, 0xc0, 0xbc, 0xc2, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0432 "в" */
    0xfa, 0x18, 0x7e, 0x86, 0x18, 0x7e,

    /* U+0433 "г" */
    0xfc, 0x21, 0x8, 0x42, 0x10,

    /* U+0434 "д" */
    0x3e, 0x11, 0x8, 0x84, 0x42, 0x21, 0x11, 0x89,
    0xff, 0x80, 0xc0, 0x40,

    /* U+0435 "е" */
    0x38, 0x8a, 0xf, 0xf8, 0x18, 0x11, 0x1e,

    /* U+0436 "ж" */
    0xc4, 0x68, 0x89, 0x93, 0x12, 0x43, 0xf8, 0x49,
    0x19, 0x36, 0x23,

    /* U+0437 "з" */
    0x78, 0x10, 0x4e, 0x4, 0x18, 0x7e,

    /* U+0438 "и" */
    0x83, 0xe, 0x3c, 0xdb, 0x3c, 0x70, 0xc1,

    /* U+0439 "й" */
    0x24, 0x70, 0x6, 0x1c, 0x79, 0xf6, 0xe9, 0xe3,
    0xc7, 0x8,

    /* U+043A "к" */
    0x85, 0x12, 0x64, 0x8f, 0x13, 0x22, 0x42,

    /* U+043B "л" */
    0x3f, 0x21, 0x21, 0x21, 0x21, 0x21, 0x61, 0xc1,

    /* U+043C "м" */
    0x81, 0xc3, 0xc3, 0xa5, 0xb5, 0x99, 0x99, 0x81,

    /* U+043D "н" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,

    /* U+043E "о" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+043F "п" */
    0xff, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,

    /* U+0440 "р" */
    0xbc, 0xc2, 0x81, 0x81, 0x81, 0x81, 0xc2, 0xbc,
    0x80, 0x80, 0x80,

    /* U+0441 "с" */
    0x3c, 0x8e, 0x4, 0x8, 0x10, 0x11, 0x9e,

    /* U+0442 "т" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8,

    /* U+0443 "у" */
    0xc3, 0x42, 0x42, 0x66, 0x24, 0x3c, 0x18, 0x18,
    0x10, 0x10, 0xe0,

    /* U+0444 "ф" */
    0x4, 0x0, 0x80, 0x10, 0x1f, 0xc4, 0x45, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x28, 0x98, 0xfe, 0x2,
    0x0, 0x40, 0x8, 0x0,

    /* U+0445 "х" */
    0x46, 0xc8, 0xf0, 0xc1, 0x85, 0x99, 0x61,

    /* U+0446 "ц" */
    0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0xff,
    0x1, 0x1,

    /* U+0447 "ч" */
    0x86, 0x18, 0x61, 0x7c, 0x10, 0x41,

    /* U+0448 "ш" */
    0x84, 0x30, 0x86, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xf, 0xff,

    /* U+0449 "щ" */
    0x84, 0x48, 0x44, 0x84, 0x48, 0x44, 0x84, 0x48,
    0x44, 0x84, 0x4f, 0xff, 0x0, 0x10, 0x1,

    /* U+044A "ъ" */
    0xe0, 0x20, 0x20, 0x3e, 0x21, 0x21, 0x21, 0x3e,

    /* U+044B "ы" */
    0x80, 0xc0, 0x60, 0x3f, 0x18, 0x4c, 0x26, 0x13,
    0xf1,

    /* U+044C "ь" */
    0x82, 0x8, 0x3e, 0x86, 0x18, 0x7e,

    /* U+044D "э" */
    0x79, 0x8, 0x9, 0xf0, 0x20, 0xe3, 0x3c,

    /* U+044E "ю" */
    0x8f, 0x26, 0x29, 0x7, 0xc1, 0x90, 0x64, 0x19,
    0x8a, 0x3c,

    /* U+044F "я" */
    0x7e, 0x18, 0x61, 0x7d, 0x14, 0x61,

    /* U+0451 "ё" */
    0x24, 0x0, 0xe2, 0x2c, 0x3f, 0xf0, 0x60, 0x62,
    0x78,

    /* U+2022 "•" */
    0xfc
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 60, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 88, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 6, .adv_w = 157, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 139, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 189, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 154, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 47, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 57, .adv_w = 75, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 63, .adv_w = 76, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 69, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 73, .adv_w = 130, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 78, .adv_w = 51, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 79, .adv_w = 86, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 80, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 79, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 90, .adv_w = 149, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 83, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 122, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 129, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 51, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 51, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 186, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 193, .adv_w = 130, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 196, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 203, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 232, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 234, .adv_w = 164, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 170, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 185, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 150, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 142, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 182, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 69, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 115, .box_w = 6, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 161, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 133, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 214, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 182, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 188, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 162, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 188, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 412, .adv_w = 163, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 422, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 131, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 177, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 159, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 252, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 147, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 75, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 523, .adv_w = 79, .box_w = 6, .box_h = 14, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 534, .adv_w = 75, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 540, .adv_w = 131, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 545, .adv_w = 112, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 546, .adv_w = 134, .box_w = 3, .box_h = 2, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 547, .adv_w = 134, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 79, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 155, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 609, .adv_w = 153, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 64, .box_w = 4, .box_h = 14, .ofs_x = -2, .ofs_y = -3},
    {.bitmap_index = 628, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 62, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 237, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 153, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 142, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 679, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 690, .adv_w = 92, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 112, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 93, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 152, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 125, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 201, .box_w = 13, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 124, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 125, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 755, .adv_w = 117, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 79, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 767, .adv_w = 67, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 769, .adv_w = 79, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 776, .adv_w = 130, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 778, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 782, .adv_w = 170, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 164, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 167, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 129, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 180, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 841, .adv_w = 149, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 230, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 184, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 184, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 159, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 911, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 216, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 184, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 190, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 959, .adv_w = 184, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 161, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 991, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 155, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 207, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1059, .adv_w = 165, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 245, .box_w = 13, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 251, .box_w = 14, .box_h = 13, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1109, .adv_w = 185, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 222, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1137, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 158, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1159, .adv_w = 246, .box_w = 13, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1176, .adv_w = 164, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1186, .adv_w = 132, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1204, .adv_w = 138, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 109, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 149, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1227, .adv_w = 141, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1234, .adv_w = 190, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 122, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 155, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 155, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1268, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1283, .adv_w = 179, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1291, .adv_w = 153, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1306, .adv_w = 152, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1324, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1349, .adv_w = 180, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1369, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1376, .adv_w = 155, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1386, .adv_w = 136, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1392, .adv_w = 211, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1403, .adv_w = 211, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1418, .adv_w = 143, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 181, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1435, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1441, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 196, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 137, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1464, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 70, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x1bd1
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 176, .range_length = 1, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1040, .range_length = 64, .glyph_id_start = 97,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 1105, .range_length = 7122, .glyph_id_start = 161,
        .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 0, 13, 14, 15, 16, 17,
    18, 19, 12, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 25, 22, 26, 27,
    28, 29, 29, 30, 31, 32, 29, 29,
    22, 33, 34, 35, 3, 36, 30, 37,
    37, 38, 39, 40, 41, 42, 43, 0,
    44, 0, 45, 46, 47, 48, 49, 50,
    51, 45, 52, 52, 53, 48, 45, 45,
    46, 46, 54, 55, 56, 57, 51, 58,
    58, 59, 58, 60, 41, 0, 0, 9,
    61, 23, 62, 24, 63, 64, 26, 38,
    24, 29, 29, 38, 29, 29, 29, 22,
    29, 33, 25, 36, 65, 22, 38, 64,
    29, 29, 64, 66, 29, 66, 22, 22,
    29, 51, 46, 0, 67, 51, 49, 59,
    0, 51, 51, 59, 51, 51, 51, 46,
    51, 46, 47, 67, 58, 46, 59, 51,
    51, 51, 51, 68, 51, 68, 46, 46,
    51, 49, 9
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 12,
    18, 19, 20, 21, 21, 0, 0, 0,
    22, 23, 24, 25, 23, 25, 25, 25,
    23, 25, 25, 26, 25, 25, 25, 25,
    23, 25, 23, 25, 3, 27, 28, 29,
    29, 30, 31, 32, 33, 34, 35, 0,
    36, 0, 37, 38, 39, 39, 39, 0,
    39, 38, 40, 41, 38, 38, 42, 42,
    39, 42, 39, 42, 43, 44, 45, 46,
    46, 47, 46, 48, 0, 0, 35, 9,
    49, 24, 25, 25, 25, 50, 25, 30,
    51, 25, 25, 25, 50, 25, 25, 23,
    25, 25, 23, 27, 30, 23, 30, 25,
    52, 25, 25, 27, 25, 25, 51, 25,
    30, 37, 23, 42, 42, 53, 39, 47,
    54, 42, 42, 42, 53, 42, 42, 39,
    42, 42, 39, 55, 46, 39, 47, 42,
    45, 42, 42, 55, 42, 42, 54, 42,
    47, 39, 9
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 2, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    10, 0, 6, -5, 0, 0, 0, 0,
    -12, -13, 2, 11, 5, 4, -9, 2,
    11, 1, 9, 2, 7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    13, 2, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, -4, 4, 4,
    0, 0, -2, 0, -2, 2, 0, -2,
    0, -2, -1, -4, 0, 0, 0, 0,
    -2, 0, 0, -3, -3, 0, 0, -2,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -2, 0, -3, -4,
    0, -5, 0, -1, -3, 0, -6, 0,
    -27, 0, 0, -4, 0, 4, 7, 0,
    0, -4, 2, 2, 7, 4, -4, 4,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, -3, -11, 0, -9,
    -2, 0, 0, 0, 0, 0, 9, 0,
    -7, -2, -1, 1, 0, -4, 0, 0,
    -2, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -18, -2, 9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 2,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 2, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 2, 4, 2, 7, -2, 0, 0,
    4, -2, -7, -31, 2, 6, 4, 0,
    -3, 0, 8, 0, 7, 0, 7, 0,
    -21, 0, -3, 7, 0, 7, -2, 4,
    2, 0, 0, 1, -2, 0, 0, -4,
    18, 0, 18, 0, 7, 0, 9, 3,
    4, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    1, -2, 0, 2, -4, -3, -4, 2,
    0, -2, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    -12, 0, -14, 0, 0, 0, 0, -2,
    0, 22, -3, -3, 2, 2, -2, 0,
    -3, 2, 0, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, 0, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, -8, 0, 7, 0, -15, -22,
    -15, -4, 7, 0, 0, -15, 0, 3,
    -5, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6,
    7, -27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 2, 2, -3, -4,
    0, -1, -1, -2, 0, 0, -2, 0,
    0, 0, -4, 0, -2, 0, -5, -4,
    0, -6, -7, -7, -4, 0, -4, 0,
    -4, 0, 0, 0, 0, -2, 0, 0,
    2, 0, 2, -2, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 2,
    -2, 0, 0, 0, -2, 2, 2, -1,
    0, 0, 0, -4, 0, -1, 0, 0,
    0, 0, 0, 1, 0, 3, -2, 0,
    -3, 0, -4, 0, 0, -2, 0, 7,
    0, 0, -2, 0, 0, 0, 0, 0,
    -1, 1, -2, -2, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, -1, 0, -2, -3, 0, 0, 0,
    0, 0, 1, 0, 0, -2, 0, -2,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -2, -3, 0, -3, 0, 0, 0, 0,
    0, 0, 0, -7, -2, -7, 4, 0,
    0, -4, 2, 4, 6, 0, -6, -1,
    -3, 0, -1, -11, 2, -2, 2, -12,
    2, 0, 0, 1, -12, 0, -12, -2,
    -19, -2, 0, -11, 0, 4, 6, 0,
    3, 0, 0, 0, 0, 0, 0, -4,
    -3, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, -1, -1,
    0, -1, -3, 0, 0, 0, 0, 0,
    0, 0, -2, -2, 0, -2, -3, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -4, 2, 0, 0, -3,
    1, 2, 2, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 2,
    0, 0, -2, 0, -2, -2, -3, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    -2, 0, 0, 0, 0, -2, -3, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    7, -2, 1, -7, 0, 0, 6, -11,
    -12, -9, -4, 2, 0, -2, -15, -4,
    0, -4, 0, -4, 3, -4, -14, 0,
    -6, 0, 0, 1, -1, 2, -2, 0,
    2, 0, -7, -9, 0, -11, -5, -5,
    -5, -7, -3, -6, 0, -4, -6, 1,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, -2, 0, 0, 0, 2, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -1, 0, -1,
    -2, 0, -4, -5, -5, -1, 0, -7,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 1, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    -4, 0, 0, 0, 0, -11, -7, 0,
    0, 0, -3, -11, 0, 0, -2, 2,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 3, 0, 2, -4, -4, 0, -2,
    -2, -3, 0, 0, 0, 0, 0, 0,
    -7, 0, -2, 0, -3, -2, 0, -5,
    -6, -7, -2, 0, -4, 0, -7, 0,
    0, 0, 0, 18, 0, 0, 1, 0,
    0, -3, 0, 2, -4, -4, -3, -4,
    -4, -3, 0, -10, 0, 0, 0, 0,
    0, -21, -4, 7, 7, -2, -9, 0,
    2, -3, 0, -11, -1, -3, 2, -16,
    -2, 3, 0, 3, -8, -3, -8, -7,
    -9, 0, 0, -13, 0, 13, 0, 0,
    -1, 0, 0, 0, -1, -1, -2, -6,
    -7, 0, -21, 1, 0, -11, 1, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -1, -2, -3,
    0, 0, -4, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -4, 0, 0, 4,
    -1, 3, 0, -5, 2, -2, -1, -6,
    -2, 0, -3, -2, -2, 0, -3, -4,
    0, 0, -2, -1, -2, -4, -3, 0,
    0, -2, 0, 2, -2, 0, -5, 0,
    0, 0, -4, 0, -4, 0, -4, -4,
    2, -4, 0, -2, -5, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    2, 0, -3, 0, -2, -3, -7, -2,
    -2, -2, -1, -2, -3, -1, 0, 0,
    0, 0, 0, -2, -2, -2, 0, 0,
    0, 0, 3, -2, 0, -2, 0, 0,
    0, -2, -3, -2, -2, -3, -2, 0,
    0, 0, 0, 0, 0, 0, 2, 9,
    -1, 0, -6, 0, -2, 4, 0, -2,
    -9, -3, 3, 0, 0, -11, -4, 2,
    -4, 2, 0, -2, -2, -7, 0, -3,
    1, 0, 0, -4, 0, 0, 0, 2,
    2, -4, -4, 0, -4, -2, -3, -2,
    -2, 0, -4, 1, -4, -4, 7, -9,
    -3, -3, -8, -5, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, 0, 0,
    -2, -2, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, -2, 0, 0, -5, 0, -5, -3,
    -3, -3, 0, 0, -3, 0, -4, 0,
    0, 0, -7, 0, 2, -5, 4, 0,
    -2, -11, 0, 0, -5, -2, 0, -9,
    -6, -6, 0, 0, -10, -2, -9, -9,
    -11, 0, -6, 0, 2, 15, -3, 0,
    -5, -2, -1, -2, -4, -6, -4, -8,
    -9, -5, -2, 0, -5, -6, 0, -6,
    -10, 0, 0, -2, 0, 1, 0, 0,
    -16, -2, 7, 5, -5, -8, 0, 1,
    -7, 0, -11, -2, -2, 4, -21, -3,
    1, 0, 0, -15, -3, -12, -2, -16,
    0, 0, -16, 0, 13, 1, 0, -2,
    0, 0, 0, 0, -1, -2, -9, -2,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, -2, 0,
    -1, -6, -11, 0, 0, -1, -3, -7,
    -2, 0, -2, 0, 0, 0, 0, -10,
    -2, -7, -7, -2, -4, -6, -2, -4,
    0, -4, -2, -7, -3, 0, -3, -4,
    -2, -4, 0, 1, 0, -2, -7, 0,
    4, -9, -4, -4, -9, -4, -2, 0,
    -4, 0, 0, 0, 0, 3, 0, 2,
    -4, 9, 0, -2, -2, -3, 0, 0,
    0, 0, 0, 0, -7, 0, -2, 0,
    -3, -2, 0, -5, -6, -7, -2, 0,
    -4, 2, 9, 0, 0, 0, 0, 18,
    0, 0, 1, 0, 0, -3, 0, 2,
    -4, -4, -3, -4, -4, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -4, 0, 0,
    0, 0, 0, -1, 0, 0, 0, -2,
    -2, 0, 0, -4, -2, 0, 0, -4,
    0, 4, -1, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 4, 2, -2,
    0, -7, -4, 0, 7, -7, -7, -4,
    -4, 9, 4, 2, -19, -2, 4, -2,
    0, -2, 2, -2, -8, 0, -2, 2,
    -3, -2, -7, -2, 0, 0, 7, 4,
    0, -6, 0, -12, -3, 6, -3, -9,
    1, -3, -7, -7, -2, 9, -8, 0,
    -3, -15, -10, -4, 2, 0, -3, 0,
    -6, 0, 2, 7, -5, -8, -9, -6,
    7, 0, 1, -16, -2, 2, -4, -2,
    -5, 0, -5, -8, -3, -3, -2, 0,
    0, -5, -5, -2, 0, 7, 5, -2,
    -12, 0, -12, -3, 0, -8, -13, -1,
    -7, -4, -7, -6, 6, -5, -1, 0,
    -9, -11, -4, 0, 0, -3, 0, -4,
    -2, 0, -2, -4, 0, 4, -7, 2,
    0, 0, -12, 0, -2, -5, -4, -2,
    -7, -6, -7, -5, 0, -7, -2, -5,
    -4, -7, -2, 0, 0, 1, 11, -4,
    0, -7, -2, 0, -2, -4, -5, -6,
    -6, -9, -3, -4, -2, -12, -8, -3,
    -8, -12, 4, 0, -3, 0, -11, -3,
    1, 4, -7, -8, -4, -7, 7, -2,
    1, -21, -4, 4, -5, -4, -8, 0,
    -7, -9, -3, -2, -2, -2, -5, -7,
    -1, 0, 0, 7, 6, -2, -15, 0,
    -13, -5, 5, -9, -15, -4, -8, -9,
    -11, -7, 4, -7, 0, -3, -13, -12,
    -5, 0, 0, 0, 0, -3, 0, 0,
    2, -3, 4, 2, -4, 4, 0, 0,
    -7, -1, 0, -1, 0, 1, 1, -2,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 2, 7, 0, 0, -3,
    0, 0, 0, 0, -2, -2, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 2, 0, 0, 0, 0, 2, 0,
    -2, 0, 9, 0, 4, 1, 1, -3,
    0, 4, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, -2, 4, 0, 7, 0, 0,
    22, 3, -4, -4, 2, 2, -2, 1,
    -11, 0, 0, 11, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 9, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, -4, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -3, -3, -3, -2, 0, 0, -2, 0,
    -6, 0, 0, 1, 0, 0, 2, 29,
    -4, -2, 7, 6, -6, 2, 0, 0,
    2, 2, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -29, 6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, -6, 0, 0, 0, 0,
    -5, -1, 0, 0, 0, -5, 0, -3,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0,
    0, -2, 0, 0, -4, 0, 0, -12,
    0, 0, -3, 0, -3, 0, -6, 0,
    0, 0, -4, 2, -3, 0, 0, -6,
    -2, -5, 0, 0, -6, 0, -2, 0,
    -11, 0, -2, 0, 0, -18, -4, -9,
    -2, -8, 0, 0, -15, 0, -6, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -4, -2, -4, -2, -5, -6, -1,
    -1, -4, 0, 0, 0, 0, -5, 0,
    -5, 3, -2, 4, 0, -2, -5, -2,
    -4, -4, 0, -3, -1, -2, 2, -6,
    -1, 0, 0, 0, -20, -2, -3, 0,
    -5, 0, -2, -11, -2, 0, 0, -2,
    -2, 0, 0, 0, 0, 2, 0, -2,
    -4, -2, 4, 0, 0, -1, -4, -4,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -2, 0, 0, 0, -4,
    2, 0, 0, 0, -6, -2, -4, 0,
    0, -6, 0, -2, 0, -11, 0, 0,
    0, 0, -22, 0, -4, -8, -11, 0,
    0, -15, 0, -2, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -3, -1,
    -3, -4, 0, -5, -2, -3, -5, 1,
    0, 0, 4, -3, 0, 7, 11, -2,
    -2, -7, 3, 11, 4, 5, -6, 3,
    9, 3, 6, 5, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    14, 11, -4, -2, 0, -2, 18, 10,
    18, 0, 0, 0, 2, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    -19, -3, -2, -9, -11, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, -9, 0, -2, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, -19,
    -3, -2, -9, -11, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -9, 0, -2, 0, 0, 0, 0, 0,
    -2, 0, 0, 0, -5, 2, 0, -2,
    2, 4, 2, -7, 0, 0, -2, 2,
    0, 2, 0, 0, 0, 0, -6, 0,
    -2, -2, -4, 0, -2, -9, 0, 14,
    -2, 0, -5, -2, 0, -2, -4, 0,
    -2, -6, -4, -3, 0, 1, 0, -4,
    2, -5, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, -19, -3, -2,
    -9, -11, 0, 0, -15, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -9, 0,
    -2, 0, 0, 0, -4, 0, -7, -3,
    -2, 7, -2, -2, -9, 1, -1, 1,
    -2, -6, 0, 5, 0, 2, 1, 2,
    -5, -9, -3, 0, -9, -4, -6, -9,
    -9, 0, -4, -4, -3, -3, -2, -2,
    -3, -2, 0, -2, -1, 3, 0, 3,
    -2, 0, 7, -9, -4, -4, -8, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, -2,
    0, 0, -6, 0, -1, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -2,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, -4,
    -2, 2, 0, -4, -4, -2, 0, -6,
    -2, -5, -2, -3, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 7, 0, 0, -4, 0,
    0, 0, 0, -3, 0, -2, 0, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, -5, 0, 0, 9, -3,
    -7, -7, 2, 2, 2, 0, -6, 2,
    3, 2, 7, 2, 7, -2, -6, 0,
    0, -9, 0, 0, -7, -6, 0, 0,
    -4, 0, -3, -4, 0, -3, 0, -3,
    0, -2, 3, 0, -2, -7, -2, 8,
    -6, 0, -3, -6, -3, 1, 0, 0,
    -2, 0, -4, 0, 0, 3, -5, 0,
    2, -2, 2, 0, 0, -7, 0, -2,
    -1, 0, -2, 2, -2, 0, 0, 0,
    -9, -3, -5, 0, -7, 0, 0, -11,
    0, 8, -2, 0, -4, 0, 1, 0,
    -2, 0, -2, -7, 0, -2, 2, 0,
    -2, -5, 0, -6, -2, 0, 0, 0,
    0, -2, 0, 0, 2, -3, 1, 0,
    0, -3, -2, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -14, 0,
    5, 0, 0, -2, 0, 0, 0, 0,
    0, 0, -2, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 5,
    0, 0, 0, 0, 0, -14, -13, 1,
    10, 7, 4, -9, 2, 9, 0, 8,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, -1, 0, 0, -9, -3, -8,
    -5, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -5, 0, 0, -4, 0, -6, -3,
    -4, -6, 0, 0, 0, 0, 0, 0,
    0, 0, -45, -41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -20, -30, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -33, -23, 0, -23, 0, 0, 0, -23,
    -23, 0, 0, -20, 0, -4, -35, -30,
    -21, 0, -4, 0, 0, 0, 0, 0,
    0, -5, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    1, 0, 0, -6, 0, -6, 0, -7,
    0, 0, 0, 1, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -7, -4,
    0, 0, 0, 0, -5, 0, -4, -7,
    2, 0, -3, 0, -6, 0, 2, 7,
    -5, -8, -9, -6, 7, 0, 1, -16,
    -2, 2, -4, -2, -5, 0, -5, -8,
    -3, -3, -2, 0, 0, -5, -5, -2,
    0, 7, 5, -2, -12, 0, -12, -8,
    -4, -8, -13, -1, -7, -4, -7, -6,
    6, -5, -1, 0, -9, -11, -4, 0,
    -6, -4, 0, 0, 0, -3, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, -2, 0,
    -1, -15, 0, -8, -9, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -4, 0, 0,
    -5, -4, -2, -3, -3, -5, 0, 0,
    0, 0, 0, 0, -2, 0, -4, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, -2, -8, -5, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 1, -2, 0, 0, -9,
    -1, -2, -8, -3, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, 0, 0, -25,
    0, -9, -7, -7, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -9, 0, 0, -3, 0,
    -16, -4, -2, -12
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 68,
    .right_class_cnt     = 55,
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
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};

extern const lv_font_t lv_font_my_montserrat_14;


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_font_my_montserrat_14 = {
#else
lv_font_t lv_font_my_montserrat_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &lv_font_my_montserrat_14,
#endif
    .user_data = NULL,
};



#endif /*#if LV_FONT_MY_MONTSERRAT_14*/
