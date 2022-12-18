#include "sort.h"
int camp_1dem(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int camp_2Arr(const void *a, const void *b) {
    return ((int*)a)[0] - ((int*)b)[0];
}

int camp_2malloc(const void *a, const void *b) {
    return (*(int**)a)[0] - (*(int**)b)[0];
}
