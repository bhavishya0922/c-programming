/**
 * Problem: Leap Year Determination
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int year = 2024;
    int is_leap = 0;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        is_leap = 1;
    }

    if (is_leap) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }
    return 0;
}
