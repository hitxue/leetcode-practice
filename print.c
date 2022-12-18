#include "print.h"
#include <stdio.h>
//一维数组打印
void printf_1arr(int *a, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
//二维数组打印
void printf_2arr(int **a, int len, int ylen)
{
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < ylen; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

