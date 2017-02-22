/*
 * This file is part of the Static Euclidean Rhythm library.
 *   (https://github.com/emcconville/static-euclidean-rhythm)
 * Copyright (c) 2015-2017 Eric McConville <emcconville@emcconville.com>.
 * 
 * Static Euclidean Rhythm library is free software: you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, version 3.
 *
 * Static Euclidean Rhythm library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RHYTHM24_H
#define RHYTHM24_H

#define RHYTHM_24_SENTINEL 26
#define MEASURE_24_LENGTH 24

static unsigned int rhythms24[RHYTHM_24_SENTINEL] = {
    0x000000, // 000000000000000000000000
    0x800000, // 100000000000000000000000
    0x800800, // 100000000000100000000000
    0x808080, // 100000001000000010000000
    0x820820, // 100000100000100000100000
    0x842108, // 100001000010000100001000
    0x888888, // 100010001000100010001000
    0x912244, // 100100010010001001000100
    0x924924, // 100100100100100100100100
    0x929292, // 100100101001001010010010
    0xa52a52, // 101001010010101001010010
    0xaa9552, // 101010101001010101010010
    0xaaaaaa, // 101010101010101010101010
    0xaab556, // 101010101011010101010110
    0xad6ad6, // 101011010110101011010110
    0xb6b6b6, // 101101101011011010110110
    0xdb6db6, // 110110110110110110110110
    0xdbb76e, // 110110111011011101101110
    0xeeeeee, // 111011101110111011101110
    0xef7bde, // 111011110111101111011110
    0xfbefbe, // 111110111110111110111110
    0xfefefe, // 111111101111111011111110
    0xffeffe, // 111111111110111111111110
    0xfffffe, // 111111111111111111111110
    0xffffff, // 111111111111111111111111
};

#endif /* rhythm24_h */
