/**
 * Problem: Arithmetic Operations & Precedence
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int a = 25, b = 7;
    printf("a = %d, b = %d\n", a, b);
    printf("Addition (a + b)       : %d\n", a + b);
    printf("Subtraction (a - b)    : %d\n", a - b);
    printf("Multiplication (a * b) : %d\n", a * b);
    printf("Integer Division (a / b): %d\n", a / b);
    printf("Modulus (a %% b)        : %d\n", a % b);
    printf("Floating Division      : %.2f\n", (float)a / b);
    return 0;
}
