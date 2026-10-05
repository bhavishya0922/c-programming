/**
 * Problem: Recursive Factorial
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main(void) {
    int num = 10;
    printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}
