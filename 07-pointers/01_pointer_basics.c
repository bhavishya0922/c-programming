/**
 * Problem: Pointer Foundations & Address Inspection
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int var = 100;
    int *ptr = &var;

    printf("Value of var       : %d\n", var);
    printf("Address of var (&) : %p\n", (void*)&var);
    printf("Pointer Value (ptr): %p\n", (void*)ptr);
    printf("Dereferenced (*ptr): %d\n", *ptr);

    // Modify through pointer
    *ptr = 250;
    printf("Modified var via pointer: %d\n", var);
    return 0;
}
