/**
 * Problem: Reverse a Number and Check Palindrome
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int original = 12321;
    int temp = original;
    int reversed = 0;

    while (temp > 0) {
        int rem = temp % 10;
        reversed = reversed * 10 + rem;
        temp /= 10;
    }

    printf("Original: %d | Reversed: %d\n", original, reversed);
    if (original == reversed) {
        printf("%d is a Numerical Palindrome.\n", original);
    }
    return 0;
}
