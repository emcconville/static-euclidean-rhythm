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

#ifndef RHYTHM_H
#define RHYTHM_H

#include "rhythm8.h"
#include "rhythm16.h"
#include "rhythm24.h"
#include "rhythm32.h"

/*!
 @enum measure_size
 A constant helper to handle the finite size of each measure.
 */
enum measure_size {
    k8 = 8,
    k16 = 16,
    k24 = 24,
    k32 = 32
};

/*!
 @struct measure
 @abstract Basic object to hold all data to iterate over a rhythm.
 */
struct measure {
    /*!
     @var interval
     @abstrace An internal reference counter for tracking steps in sequence.
     */
    unsigned char interval;
    /*!
     @var rhythm_index
     @abstrace An index to which sequence to step through.
     */
    unsigned char rhythm_index;
    /*!
     @var rhythm_sentinel
     @abstrace The finial size of the sequence.
     */
    unsigned char rhythm_sentinel;
    /*!
     @var rhythm_end
     @abstrace When shoud the internal internval restart
     */
    unsigned char rhythm_end;
    /*!
     @var rhythms
     @abstrace A pointer to which rhythm table to access
     */
    unsigned int * rhythms;
};

/*!
 @function measure_init
 @abstract Initialize measure structure to work with rhythm size.
 @param m
    An allocated measure structure.
 @param size
    One of the defined measures (e.g. 8, 16, 24, 32).
 */
struct measure * measure_init(struct measure * m, enum measure_size size);

/*!
 @function measure_set_rhythm
 @abstract Set which Bjorklund rhythm to step through.
 @param m
    An initialzied measure structure.
 @param i
    An index to the rhythm to references.
 
 */
void measure_set_rhythm(struct measure *m, unsigned int i);

/*!
 @function measure_step
 @abstract Evaluate if current step has a note, and to progress the internal counter to the next step.
 @discussion This method will return a non-zero value if the current beat has a note, else rest.
 @param m
    An imitialized measure structure.
 */
unsigned int measure_step(struct measure * m);

#endif /* rhythm_h */
