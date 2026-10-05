/**
 * Problem: Dynamic Memory Allocation (malloc, calloc, free)
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // 1. Allocate with malloc (uninitialized heap memory)
    int *arr_m = (int*)malloc(n * sizeof(int));
    if (arr_m == NULL) {
        fprintf(stderr, "malloc failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) arr_m[i] = (i + 1) * 10;

    // 2. Allocate with calloc (zero-initialized heap memory)
    int *arr_c = (int*)calloc(n, sizeof(int));
    if (arr_c == NULL) {
        free(arr_m);
        fprintf(stderr, "calloc failed!\n");
        return 1;
    }

    printf("malloc array : ");
    for (int i = 0; i < n; i++) printf("%d ", arr_m[i]);
    printf("\ncalloc array : ");
    for (int i = 0; i < n; i++) printf("%d ", arr_c[i]);
    printf("\n");

    // Clean up heap allocations to prevent memory leaks
    free(arr_m);
    free(arr_c);
    arr_m = NULL;
    arr_c = NULL;
    printf("Heap memory freed safely.\n");
    return 0;
}
