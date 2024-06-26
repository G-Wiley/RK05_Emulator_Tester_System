// *********************************************************************************
// display_big_images.h
//   bitmap arrays of large drive address digits, digit pairs, and various other bitmaps
// *********************************************************************************
// 

// converted the bmp files using https://lvgl.io/tools/imageconverter
//   Color format: CF_INDEXED_1_BIT
//   Output format: C array
//   Options: none
//
unsigned char digit_0m[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfe, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x01, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x0f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digit_1m[] = {
  0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf7, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0x87, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
};

unsigned char digit_2m[] = {
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xe0, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xfd, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
};

unsigned char digit_3m[] = {
  0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xc0, 0x3f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x80, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x02, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x80, 0x1f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digit_4m[] = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xbf, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfe, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xfc, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xf8, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xf0, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xe0, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xe0, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xc0, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0x80, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x80, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digit_5m[] = {
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x80, 0x1f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digit_6m[] = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xc0, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xcf, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xf8, 0x1f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x0f, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xe0, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xe0, 0x07, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xf8, 0x1f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digit_7m[] = {
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digits_01m[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1c, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0x80, 0x00, 0x0f, 0x80, 0x07, 0xc0, 0x00, 
  0x00, 0x03, 0xff, 0xe0, 0x00, 0x1f, 0x80, 0x1f, 0xc0, 0x00, 
  0x00, 0x07, 0xff, 0xf0, 0x00, 0x1f, 0x80, 0x3f, 0xc0, 0x00, 
  0x00, 0x0f, 0xff, 0xf0, 0x00, 0x1f, 0x00, 0xff, 0xc0, 0x00, 
  0x00, 0x0f, 0xc3, 0xf8, 0x00, 0x3f, 0x01, 0xff, 0xc0, 0x00, 
  0x00, 0x1f, 0x81, 0xf8, 0x00, 0x3f, 0x03, 0xff, 0xc0, 0x00, 
  0x00, 0x1f, 0x80, 0xfc, 0x00, 0x3e, 0x03, 0xef, 0xc0, 0x00, 
  0x00, 0x1f, 0x00, 0xfc, 0x00, 0x7e, 0x03, 0x8f, 0xc0, 0x00, 
  0x00, 0x1f, 0x00, 0xfc, 0x00, 0x7c, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x00, 0x7c, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x00, 0xfc, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x00, 0xf8, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x00, 0xf8, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0x7c, 0x01, 0xf8, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0x7c, 0x01, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0x7c, 0x01, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0x7c, 0x03, 0xf0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x03, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x07, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x07, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x3f, 0x00, 0xfc, 0x07, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x1f, 0x00, 0xfc, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x1f, 0x80, 0xf8, 0x0f, 0xc0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x1f, 0x81, 0xf8, 0x0f, 0x80, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x1f, 0xc1, 0xf8, 0x1f, 0x80, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x0f, 0xff, 0xf0, 0x1f, 0x80, 0x03, 0xff, 0xff, 0x00, 
  0x00, 0x0f, 0xff, 0xe0, 0x1f, 0x00, 0x03, 0xff, 0xff, 0x00, 
  0x00, 0x07, 0xff, 0xc0, 0x3f, 0x00, 0x03, 0xff, 0xff, 0x00, 
  0x00, 0x01, 0xff, 0x80, 0x3f, 0x00, 0x03, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x7e, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digits_23m[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x00, 0x00, 0x0f, 0x80, 0x0e, 0x00, 0x00, 
  0x00, 0x03, 0xfe, 0x00, 0x00, 0x1f, 0x80, 0xff, 0xc0, 0x00, 
  0x00, 0x0f, 0xff, 0x80, 0x00, 0x1f, 0x03, 0xff, 0xf0, 0x00, 
  0x00, 0x1f, 0xff, 0xc0, 0x00, 0x3f, 0x07, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xff, 0xe0, 0x00, 0x3f, 0x07, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xff, 0xe0, 0x00, 0x7e, 0x07, 0x83, 0xfc, 0x00, 
  0x00, 0x38, 0x1f, 0xe0, 0x00, 0x7e, 0x06, 0x01, 0xfc, 0x00, 
  0x00, 0x30, 0x0f, 0xe0, 0x00, 0xfe, 0x00, 0x01, 0xfc, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x00, 0xfc, 0x00, 0x00, 0xfc, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x01, 0xfc, 0x00, 0x01, 0xfc, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x01, 0xf8, 0x00, 0x01, 0xf8, 0x00, 
  0x00, 0x00, 0x0f, 0xe0, 0x01, 0xf8, 0x00, 0x03, 0xf8, 0x00, 
  0x00, 0x00, 0x0f, 0xc0, 0x03, 0xf0, 0x01, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x1f, 0xc0, 0x03, 0xf0, 0x01, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x3f, 0x80, 0x03, 0xf0, 0x01, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x3f, 0x80, 0x07, 0xe0, 0x01, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x7f, 0x00, 0x07, 0xe0, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0xfe, 0x00, 0x07, 0xc0, 0x00, 0x03, 0xfc, 0x00, 
  0x00, 0x01, 0xfc, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x03, 0xf8, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x07, 0xf0, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x07, 0xf0, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x0f, 0xc0, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x1f, 0xc0, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x3f, 0x80, 0x00, 0x3f, 0x00, 0x0e, 0x01, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0xf0, 0x3e, 0x00, 0x0f, 0xcf, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0xf0, 0x7e, 0x00, 0x0f, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xff, 0xf0, 0x7e, 0x00, 0x0f, 0xff, 0xf0, 0x00, 
  0x00, 0x3f, 0xff, 0xf0, 0x7c, 0x00, 0x07, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digits_45m[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xc0, 0x00, 0x1f, 0x83, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x3f, 0xe0, 0x00, 0x1f, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x3f, 0xe0, 0x00, 0x3f, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x7f, 0xe0, 0x00, 0x3f, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0xff, 0xe0, 0x00, 0x3e, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0xff, 0xe0, 0x00, 0x7e, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x01, 0xf7, 0xe0, 0x00, 0x7c, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x01, 0xf7, 0xe0, 0x00, 0x7c, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x03, 0xe7, 0xe0, 0x00, 0xfc, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x03, 0xc7, 0xe0, 0x00, 0xf8, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x07, 0xc7, 0xe0, 0x00, 0xf8, 0x03, 0xc0, 0x00, 0x00, 
  0x00, 0x0f, 0x87, 0xe0, 0x01, 0xf8, 0x03, 0xff, 0x00, 0x00, 
  0x00, 0x0f, 0x87, 0xe0, 0x01, 0xf0, 0x03, 0xff, 0xe0, 0x00, 
  0x00, 0x1f, 0x07, 0xe0, 0x01, 0xf0, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x1f, 0x07, 0xe0, 0x03, 0xf0, 0x03, 0xff, 0xf8, 0x00, 
  0x00, 0x3e, 0x07, 0xe0, 0x03, 0xe0, 0x03, 0xff, 0xfc, 0x00, 
  0x00, 0x3e, 0x07, 0xe0, 0x03, 0xe0, 0x00, 0x01, 0xfe, 0x00, 
  0x00, 0x7c, 0x07, 0xe0, 0x07, 0xe0, 0x00, 0x00, 0xfe, 0x00, 
  0x00, 0x7f, 0xff, 0xf8, 0x07, 0xc0, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x7f, 0xff, 0xfc, 0x0f, 0xc0, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x7f, 0xff, 0xfc, 0x0f, 0xc0, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x7f, 0xff, 0xfc, 0x0f, 0x80, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x3f, 0xff, 0xf8, 0x1f, 0x80, 0x00, 0x00, 0x7e, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x1f, 0x80, 0x04, 0x00, 0xfc, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x0e, 0x01, 0xfc, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x3f, 0x00, 0x0f, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x3e, 0x00, 0x0f, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x07, 0xe0, 0x3e, 0x00, 0x07, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x07, 0xc0, 0x7e, 0x00, 0x07, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

unsigned char digits_67m[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xe0, 0x00, 0x1f, 0x0f, 0xff, 0xfc, 0x00, 
  0x00, 0x03, 0xff, 0xe0, 0x00, 0x3f, 0x0f, 0xff, 0xfc, 0x00, 
  0x00, 0x07, 0xff, 0xe0, 0x00, 0x3e, 0x0f, 0xff, 0xfc, 0x00, 
  0x00, 0x0f, 0xff, 0xe0, 0x00, 0x7e, 0x0f, 0xff, 0xfc, 0x00, 
  0x00, 0x0f, 0xc0, 0x20, 0x00, 0x7e, 0x0f, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0x80, 0x00, 0x00, 0x7c, 0x00, 0x00, 0xfc, 0x00, 
  0x00, 0x1f, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xf8, 0x00, 
  0x00, 0x3f, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, 0xf8, 0x00, 
  0x00, 0x3e, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x01, 0xf0, 0x00, 
  0x00, 0x3e, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x03, 0xf0, 0x00, 
  0x00, 0x3e, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x03, 0xe0, 0x00, 
  0x00, 0x3e, 0x7f, 0x80, 0x01, 0xf0, 0x00, 0x03, 0xe0, 0x00, 
  0x00, 0x7f, 0xff, 0xe0, 0x03, 0xf0, 0x00, 0x07, 0xe0, 0x00, 
  0x00, 0x7f, 0xff, 0xe0, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x00, 
  0x00, 0x7f, 0xff, 0xf0, 0x03, 0xe0, 0x00, 0x0f, 0xc0, 0x00, 
  0x00, 0x7f, 0x87, 0xf0, 0x07, 0xe0, 0x00, 0x0f, 0x80, 0x00, 
  0x00, 0x7e, 0x03, 0xf8, 0x07, 0xc0, 0x00, 0x1f, 0x80, 0x00, 
  0x00, 0x7e, 0x01, 0xf8, 0x07, 0xc0, 0x00, 0x1f, 0x80, 0x00, 
  0x00, 0x7e, 0x01, 0xf8, 0x0f, 0xc0, 0x00, 0x3f, 0x00, 0x00, 
  0x00, 0x3e, 0x01, 0xf8, 0x0f, 0x80, 0x00, 0x3f, 0x00, 0x00, 
  0x00, 0x3e, 0x01, 0xf8, 0x1f, 0x80, 0x00, 0x7f, 0x00, 0x00, 
  0x00, 0x3e, 0x01, 0xf8, 0x1f, 0x80, 0x00, 0x7e, 0x00, 0x00, 
  0x00, 0x3f, 0x01, 0xf8, 0x1f, 0x00, 0x00, 0x7e, 0x00, 0x00, 
  0x00, 0x3f, 0x03, 0xf0, 0x3f, 0x00, 0x00, 0xfe, 0x00, 0x00, 
  0x00, 0x1f, 0x87, 0xf0, 0x3f, 0x00, 0x00, 0xfc, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0xe0, 0x3e, 0x00, 0x01, 0xfc, 0x00, 0x00, 
  0x00, 0x0f, 0xff, 0xe0, 0x7e, 0x00, 0x01, 0xf8, 0x00, 0x00, 
  0x00, 0x07, 0xff, 0x80, 0x7c, 0x00, 0x03, 0xf8, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0x00, 0x7c, 0x00, 0x03, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x78, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
