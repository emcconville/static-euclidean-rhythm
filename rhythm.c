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

#include "rhythm.h"

struct measure * measure_init(struct measure * m, enum measure_size size)
{
    m->interval = 0;
    m->rhythm_index = 0;
    switch (size) {
        case k32: {
            m->rhythm_sentinel = RHYTHM_32_SENTINEL;
            m->rhythm_end = MEASURE_32_LENGTH;
            m->rhythms = rhythms32;
            break;
        }
        case k24: {
            m->rhythm_sentinel = RHYTHM_24_SENTINEL;
            m->rhythm_end = MEASURE_24_LENGTH;
            m->rhythms = rhythms24;
            break;
        }
        case k8: {
            m->rhythm_sentinel = RHYTHM_8_SENTINEL;
            m->rhythm_end = MEASURE_8_LENGTH;
            m->rhythms = rhythms8;
            break;
        }
        default:
        case k16: {
            m->rhythm_sentinel = RHYTHM_16_SENTINEL;
            m->rhythm_end = MEASURE_16_LENGTH;
            m->rhythms = rhythms16;
            break;
        }
    }
    return m;
}

void measure_set_rhythm(struct measure *m, unsigned int i)
{
    m->rhythm_index = i % m->rhythm_sentinel;
}

unsigned int measure_step(struct measure * m)
{
    int step;
    step = (m->rhythm_end - 1) - m->interval;
    m->interval = (m->interval + 1) % m->rhythm_end;
    return m->rhythms[m->rhythm_index] & ( 1 << step);
}
