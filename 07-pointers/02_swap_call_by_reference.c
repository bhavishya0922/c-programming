/**
 * Problem: Call by Reference Swapping
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 40, y = 90;
    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap : x = %d, y = %d\n", x, y);
    return 0;
}
