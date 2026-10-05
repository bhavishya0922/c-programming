/**
 * Problem: Data Types and Memory Footprint
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    printf("--- Primitive Data Types and Storage Sizes ---\n");
    printf("sizeof(char)        : %zu byte\n", sizeof(char));
    printf("sizeof(short)       : %zu bytes\n", sizeof(short));
    printf("sizeof(int)         : %zu bytes\n", sizeof(int));
    printf("sizeof(long)        : %zu bytes\n", sizeof(long));
    printf("sizeof(long long)   : %zu bytes\n", sizeof(long long));
    printf("sizeof(float)       : %zu bytes\n", sizeof(float));
    printf("sizeof(double)      : %zu bytes\n", sizeof(double));
    printf("sizeof(long double) : %zu bytes\n", sizeof(long double));
    return 0;
}
