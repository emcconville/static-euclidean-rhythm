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
