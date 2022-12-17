#include <stdio.h>

int camp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int main(void) {
    int aa[4] = {2,1,3,4};
    for (int i = 0; i < 4; i++) {
        printf("%d ", aa[i]);
    }
    printf("\n");
    qsort(aa, 4, sizeof(int), camp);
    for (int i = 0; i < 4; i++) {
        printf("%d ", aa[i]);
    }
    printf("\n");
    while(1);
}