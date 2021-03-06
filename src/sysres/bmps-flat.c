#define NR_BMPS  6

static int sz_bmps [] =
{
    174, 206, 0, 0, 0, 0
};


static const unsigned char bmps_data[] = {
  0x42, 0x4d, 0xae, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x28, 0x00,
  0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xc4, 0x0e,
  0x00, 0x00, 0xc4, 0x0e, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xf8, 0x1f,
  0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x1f, 0xf7, 0xef,
  0xf7, 0xef, 0xff, 0xff, 0xf7, 0xef, 0xef, 0xf7,
  0xee, 0xf7, 0xff, 0xff, 0xef, 0xf7, 0xde, 0x7b,
  0xdc, 0x7b, 0xe0, 0x7f, 0xd3, 0xcb, 0xbe, 0x7d,
  0xb8, 0x3d, 0xef, 0x7f, 0xb1, 0x8d, 0xbf, 0xfd,
  0xb1, 0x1d, 0xef, 0x7f, 0xb8, 0x1d, 0xbe, 0x7d,
  0xa3, 0x8d, 0xef, 0x1f, 0xbc, 0x3d, 0xbe, 0x7d,
  0xa7, 0xc5, 0xe0, 0x5f, 0xbc, 0x3d, 0xbf, 0x3d,
  0xbf, 0xe1, 0xe0, 0x5f, 0xb8, 0x1d, 0xb9, 0x9d,
  0xbf, 0xf1, 0xfb, 0xdf, 0xb1, 0x8d, 0xd9, 0x9b,
  0xdf, 0xfb, 0xf8, 0x1f, 0xd3, 0xcb, 0xec, 0x37,
  0xef, 0xf7, 0xf8, 0x1f, 0xef, 0xf7, 0xf7, 0xef,
  0xf7, 0xef, 0xff, 0xff, 0xf7, 0xef, 0xf8, 0x1f,
  0xf8, 0x1f, 0xff, 0xff, 0xf8, 0x1f, 0x42, 0x4d,
  0xce, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3e, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0xc4, 0x0e, 0x00, 0x00,
  0xc4, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x04, 0x02, 0x85,
  0x00, 0x00, 0x00, 0x00, 0x22, 0x0a, 0x04, 0x84,
  0x80, 0x00, 0x00, 0x00, 0x14, 0x11, 0x02, 0x85,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x3f, 0x81, 0x86,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
  0x00, 0x00, 0x00, 0x00, 0x7f, 0x04, 0x01, 0x86,
  0x00, 0x00, 0x00, 0x00, 0x3e, 0x0e, 0x03, 0x87,
  0x00, 0x00, 0x00, 0x00, 0x1c, 0x1f, 0x07, 0x87,
  0x80, 0x00, 0x00, 0x00, 0x08, 0x3f, 0x83, 0x87,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x86,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 
};

