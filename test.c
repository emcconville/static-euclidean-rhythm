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
