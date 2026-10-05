/**
 * Problem: Armstrong Number Check (e.g. 153 = 1^3 + 5^3 + 3^3)
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int num = 153;
    int temp = num;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum += (digit * digit * digit);
        temp /= 10;
    }

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }
    return 0;
}
