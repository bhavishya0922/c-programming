/**
 * Problem: Modular Arithmetic with Functions
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

// Function prototypes
int compute_gcd(int a, int b);
int is_prime(int n);

int main(void) {
    int x = 48, y = 18;
    printf("GCD of %d and %d is %d\n", x, y, compute_gcd(x, y));

    int test_num = 29;
    printf("%d is %s\n", test_num, is_prime(test_num) ? "Prime" : "Composite");
    return 0;
}

int compute_gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
