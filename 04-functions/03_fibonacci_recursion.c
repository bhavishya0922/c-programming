/**
 * Problem: Nth Fibonacci Number (Recursive)
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int terms = 10;
    printf("First %d Fibonacci terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}
