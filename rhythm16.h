//
//  rhythm16.h
//  StaticEuclideanRhythm
//
//  Created by Eric McConville on 12/11/15.
//  Copyright © 2015 Eric McConville. All rights reserved.
//

#ifndef rhythm16_h
#define rhythm16_h

#define RHYTHM_16_SENTINEL 18
#define MEASURE_16_LENGTH 16

static unsigned int rhythms16[RHYTHM_16_SENTINEL] = {
    0x0000, // 0000000000000000
    0x8000, // 1000000000000000
    0x8080, // 1000000010000000
    0x8420, // 1000010000100000
    0x8888, // 1000100010001000
    0x9248, // 1001001001001000
    0x9292, // 1001001010010010
    0xa952, // 1010100101010010
    0xaaaa, // 1010101010101010
    0xab56, // 1010101101010110
    0xb6b6, // 1011011010110110
    0xdb6d, // 1101101101101101
    0xeeee, // 1110111011101110
    0xf7bd, // 1111011110111101
    0xfefe, // 1111111011111110
    0xfffe, // 1111111111111110
    0xffff, // 1111111111111111
};

#endif /* rhythm16_h */
