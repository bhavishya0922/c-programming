/**
 * Problem: Pointer Arithmetic and Array Traversal
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int numbers[] = {11, 22, 33, 44, 55};
    int *ptr = numbers;

    printf("Traversing array with pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: Value = %d at Address = %p\n", i, *(ptr + i), (void*)(ptr + i));
    }
    return 0;
}
