/**
 * Problem: Implicit vs Explicit Type Casting
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int total_marks = 425;
    int subjects = 5;

    // Explicit casting to float to avoid integer truncation
    float percentage = (float)total_marks / subjects;

    printf("Total: %d across %d subjects\n", total_marks, subjects);
    printf("Calculated Percentage: %.2f%%\n", percentage);
    return 0;
}
