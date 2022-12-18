#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void) {
    int aa[4] = {2,1,3,4};
    printf_1arr(aa, 4);
    qsort(aa, 4, sizeof(int), camp_1dem);
    printf_1arr(aa, 4);

    //二维数组测试
    int bb[][4] = {
                    {3, 2, 1, 4},
                    {2, 1, 5, 2},
                    {6, 3, 1, 7}
    };
    int* bc[3];
    for (int i = 0; i < 3; i++) {
        bc[i] = bb[i];
    }
    printf_2arr(bc, 3, 4);
    // qsort(bb, 3, sizeof(int) * 4, camp_2Arr);
    // printf_2arr(bc, 3, 4);
    qsort(bc, 3, sizeof(int*), camp_2malloc);
    printf_2arr(bc, 3, 4);
    while(1);
}