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

/* printf */
#include <stdio.h>
/* atoi */
#include <stdlib.h>

#include "rhythm.h"

int main(int argc, const char * argv[]) {
    struct measure M;
    enum measure_size S = k16;
    if (argc == 2) {
        int t = atoi(argv[1]);
        switch (t) {
            case k8:
            case k16:
            case k24:
            case k32: {
                S = (enum measure_size)t;
                break;
            }
            default:
                fprintf(stderr, "Possible arguments must be 8, 16, 24, or 32.\n");
                return 1;
        }
        
    }
    int i,j;
    for (i = 0; i < M.rhythm_end+1; i++)
    {
        measure_init(&M, S);
        measure_set_rhythm(&M, i);
        printf("E(%2d, %2d) = [ ", M.rhythm_index, M.rhythm_end);
        for (j = 0; j < M.rhythm_end; j++) {
            if(measure_step(&M) > 0) {
                printf("x ");
            } else {
                printf(". ");
            }
        }
        printf("]\n");
    }
    return 0;
}
