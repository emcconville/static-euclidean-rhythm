#ifndef RHYTHM8_H
#define RHYTHM8_H

#define RHYTHM_8_SENTINEL 10
#define MEASURE_8_LENGTH 8

static unsigned int rhythms8[RHYTHM_8_SENTINEL] = {
    0x00, // 00000000
    0x80, // 10000000
    0x88, // 10001000
    0x92, // 10010010
    0xaa, // 10101010
    0xb6, // 10110110
    0xee, // 11101110
    0xfe, // 11111110
    0xff, // 11111111
};

#endif /* rhythm8_h */
