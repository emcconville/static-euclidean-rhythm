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

#ifndef RHYTHM16_H
#define RHYTHM16_H

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
