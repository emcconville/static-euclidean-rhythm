# Static Euclidean Rhythm
Euclidean Rhythm captured into a static header for embed projects.

A while back, I worked on a AVR project that leveraged Euclidean/Bjorklund algorithm as described in [_The Euclidean Algorithm Generates Traditional Musical Rhythms_](http://cgm.cs.mcgill.ca/~godfried/publications/banff.pdf).
The actual implementation of Bjorklund algorithm is simple, but if the phases are _finite_, & steps are constant, why even bother calculating on a AVR package?

This projects locks the resulting binary sequence into a quick static look-up table. It can be included directly, copied, or even put in [`PROGMEM`](http://www.nongnu.org/avr-libc/user-manual/pgmspace.html).

A simple [`test.c`](test.c) file exists,  and [`rhythm.c`](rhythm.c) as an example implementation.

    # Build local test scriot
    clang test.c rhythm.c -o test.rhythm

## 8 Step Sequence

[`#include "rhythm8.h"`](rhythm8.h)

    ./test.rhythm 8 
    E( 0,  8) = [ . . . . . . . . ]
    E( 1,  8) = [ x . . . . . . . ]
    E( 2,  8) = [ x . . . x . . . ]
    E( 3,  8) = [ x . . x . . x . ]
    E( 4,  8) = [ x . x . x . x . ]
    E( 5,  8) = [ x . x x . x x . ]
    E( 6,  8) = [ x x x . x x x . ]
    E( 7,  8) = [ x x x x x x x . ]
    E( 8,  8) = [ x x x x x x x x ]

## 16 Step Sequence

[`#include "rhythm16.h"`](rhythm16.h)

    ./test.rhythm 16
    E( 0, 16) = [ . . . . . . . . . . . . . . . . ]
    E( 1, 16) = [ x . . . . . . . . . . . . . . . ]
    E( 2, 16) = [ x . . . . . . . x . . . . . . . ]
    E( 3, 16) = [ x . . . . x . . . . x . . . . . ]
    E( 4, 16) = [ x . . . x . . . x . . . x . . . ]
    E( 5, 16) = [ x . . x . . x . . x . . x . . . ]
    E( 6, 16) = [ x . . x . . x . x . . x . . x . ]
    E( 7, 16) = [ x . x . x . . x . x . x . . x . ]
    E( 8, 16) = [ x . x . x . x . x . x . x . x . ]
    E( 9, 16) = [ x . x . x . x x . x . x . x x . ]
    E(10, 16) = [ x . x x . x x . x . x x . x x . ]
    E(11, 16) = [ x x . x x . x x . x x . x x . x ]
    E(12, 16) = [ x x x . x x x . x x x . x x x . ]
    E(13, 16) = [ x x x x . x x x x . x x x x . x ]
    E(14, 16) = [ x x x x x x x . x x x x x x x . ]
    E(15, 16) = [ x x x x x x x x x x x x x x x . ]
    E(16, 16) = [ x x x x x x x x x x x x x x x x ]

## 24 Step Sequence

[`#include "rhythm24.h"`](rhythm24.h)

    ./test.rhythm 24
    E( 0, 24) = [ . . . . . . . . . . . . . . . . . . . . . . . . ]
    E( 1, 24) = [ x . . . . . . . . . . . . . . . . . . . . . . . ]
    E( 2, 24) = [ x . . . . . . . . . . . x . . . . . . . . . . . ]
    E( 3, 24) = [ x . . . . . . . x . . . . . . . x . . . . . . . ]
    E( 4, 24) = [ x . . . . . x . . . . . x . . . . . x . . . . . ]
    E( 5, 24) = [ x . . . . x . . . . x . . . . x . . . . x . . . ]
    E( 6, 24) = [ x . . . x . . . x . . . x . . . x . . . x . . . ]
    E( 7, 24) = [ x . . x . . . x . . x . . . x . . x . . . x . . ]
    E( 8, 24) = [ x . . x . . x . . x . . x . . x . . x . . x . . ]
    E( 9, 24) = [ x . . x . . x . x . . x . . x . x . . x . . x . ]
    E(10, 24) = [ x . x . . x . x . . x . x . x . . x . x . . x . ]
    E(11, 24) = [ x . x . x . x . x . . x . x . x . x . x . . x . ]
    E(12, 24) = [ x . x . x . x . x . x . x . x . x . x . x . x . ]
    E(13, 24) = [ x . x . x . x . x . x x . x . x . x . x . x x . ]
    E(14, 24) = [ x . x . x x . x . x x . x . x . x x . x . x x . ]
    E(15, 24) = [ x . x x . x x . x . x x . x x . x . x x . x x . ]
    E(16, 24) = [ x x . x x . x x . x x . x x . x x . x x . x x . ]
    E(17, 24) = [ x x . x x . x x x . x x . x x x . x x . x x x . ]
    E(18, 24) = [ x x x . x x x . x x x . x x x . x x x . x x x . ]
    E(19, 24) = [ x x x . x x x x . x x x x . x x x x . x x x x . ]
    E(20, 24) = [ x x x x x . x x x x x . x x x x x . x x x x x . ]
    E(21, 24) = [ x x x x x x x . x x x x x x x . x x x x x x x . ]
    E(22, 24) = [ x x x x x x x x x x x . x x x x x x x x x x x . ]
    E(23, 24) = [ x x x x x x x x x x x x x x x x x x x x x x x . ]
    E(24, 24) = [ x x x x x x x x x x x x x x x x x x x x x x x x ]

## 32 Step Sequence

[`#include "rhythm32.h"`](rhythm32.h)

    ./test.rhythm 32
    E( 0, 32) = [ . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ]
    E( 1, 32) = [ x . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . ]
    E( 2, 32) = [ x . . . . . . . . . . . . . . . x . . . . . . . . . . . . . . . ]
    E( 3, 32) = [ x . . . . . . . . . . x . . . . . . . . . . x . . . . . . . . . ]
    E( 4, 32) = [ x . . . . . . . x . . . . . . . x . . . . . . . x . . . . . . . ]
    E( 5, 32) = [ x . . . . . x . . . . . . x . . . . . x . . . . . . x . . . . . ]
    E( 6, 32) = [ x . . . . x . . . . x . . . . . x . . . . x . . . . x . . . . . ]
    E( 7, 32) = [ x . . . . x . . . x . . . . x . . . x . . . . x . . . x . . . . ]
    E( 8, 32) = [ x . . . x . . . x . . . x . . . x . . . x . . . x . . . x . . . ]
    E( 9, 32) = [ x . . . x . . x . . . x . . x . . . x . . x . . . x . . x . . . ]
    E(10, 32) = [ x . . x . . x . . x . . x . . . x . . x . . x . . x . . x . . . ]
    E(11, 32) = [ x . . x . . x . . x . . x . . x . . x . . x . . x . . x . . x . ]
    E(12, 32) = [ x . . x . . x . x . . x . . x . x . . x . . x . x . . x . . x . ]
    E(13, 32) = [ x . x . . x . x . . x . x . . x . x . . x . x . . x . x . . x . ]
    E(14, 32) = [ x . x . x . . x . x . x . . x . x . x . x . . x . x . x . . x . ]
    E(15, 32) = [ x . x . x . x . x . x . x . . x . x . x . x . x . x . x . . x . ]
    E(16, 32) = [ x . x . x . x . x . x . x . x . x . x . x . x . x . x . x . x . ]
    E(17, 32) = [ x . x . x . x . x . x . x . x x . x . x . x . x . x . x . x x . ]
    E(18, 32) = [ x . x . x . x x . x . x . x x . x . x . x . x x . x . x . x x . ]
    E(19, 32) = [ x . x . x x . x . x x . x . x x . x . x x . x . x x . x . x x . ]
    E(20, 32) = [ x . x x . x x . x . x x . x x . x . x x . x x . x . x x . x x . ]
    E(21, 32) = [ x . x x . x x . x x . x x . x x . x x . x x . x x . x x . x x . ]
    E(22, 32) = [ x x . x x . x x . x x . x x . x x x . x x . x x . x x . x x . x ]
    E(23, 32) = [ x x . x x x . x x . x x x . x x . x x x . x x . x x x . x x . x ]
    E(24, 32) = [ x x x . x x x . x x x . x x x . x x x . x x x . x x x . x x x . ]
    E(25, 32) = [ x x x . x x x x . x x x . x x x x . x x x . x x x x . x x x . x ]
    E(26, 32) = [ x x x x . x x x x . x x x x . x x x x x . x x x x . x x x x . x ]
    E(27, 32) = [ x x x x x . x x x x x . x x x x x x . x x x x x . x x x x x x . ]
    E(28, 32) = [ x x x x x x x . x x x x x x x . x x x x x x x . x x x x x x x . ]
    E(29, 32) = [ x x x x x x x x x . x x x x x x x x x x . x x x x x x x x x x . ]
    E(30, 32) = [ x x x x x x x x x x x x x x x . x x x x x x x x x x x x x x x . ]
    E(31, 32) = [ x x x x x x x x x x x x x x x x x x x x x x x x x x x x x x x . ]
    E(32, 32) = [ x x x x x x x x x x x x x x x x x x x x x x x x x x x x x x x x ]
