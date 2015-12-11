//
//  rhythm.c
//  StaticEuclideanRhythm
//
//  Created by Eric McConville on 12/10/15.
//  Copyright © 2015 Eric McConville. All rights reserved.
//

#include "rhythm.h"



struct measure * measure_init(struct measure * m, enum measure_size size)
{
    m->interval = 0;
    m->rhythem_index = 0;
    switch (size) {
        case k32: {
            m->rhythem_sentinel = RHYTHM_32_SENTINEL;
            m->rhythem_end = MEASURE_32_LENGTH;
            m->rhythems = rhythms32;
            break;
        }
        case k24: {
            m->rhythem_sentinel = RHYTHM_24_SENTINEL;
            m->rhythem_end = MEASURE_24_LENGTH;
            m->rhythems = rhythms24;
            break;
        }
        case k8: {
            m->rhythem_sentinel = RHYTHM_8_SENTINEL;
            m->rhythem_end = MEASURE_8_LENGTH;
            m->rhythems = rhythms8;
            break;
        }
        default:
        case k16: {
            m->rhythem_sentinel = RHYTHM_16_SENTINEL;
            m->rhythem_end = MEASURE_16_LENGTH;
            m->rhythems = rhythms16;
            break;
        }
    }
    return m;
}

void measure_set_rhythm(struct measure *m, unsigned int i)
{
    m->rhythem_index = i % m->rhythem_sentinel;
}

unsigned int measure_step(struct measure * m)
{
    int step = (m->rhythem_end - 1) - m->interval;
    m->interval = (m->interval + 1) % m->rhythem_end;
    int j = m->rhythems[m->rhythem_index] & ( 1 << step);
    return j;
}
