/**
 * Problem: Formatted User Input with scanf
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int age = 19;
    float marks = 85.5f;
    char grade = 'A';

    printf("Student Information:\n");
    printf("Age: %d | Marks: %.1f | Grade: %c\n", age, marks, grade);
    return 0;
}
