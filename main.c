#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void) {
    int aa[4] = {2,1,3,4};
    for (int i = 0; i < 4; i++) {
        printf("%d ", aa[i]);
    }
    printf("\n");
    qsort(aa, 4, sizeof(int), camp_2Arr);
    for (int i = 0; i < 4; i++) {
        printf("%d ", aa[i]);
    }
    printf("\n");
    while(1);
}