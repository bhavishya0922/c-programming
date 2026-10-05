/**
 * Problem: Sum of First N Natural Numbers
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int n = 50;
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %lld\n", n, sum);
    return 0;
}
