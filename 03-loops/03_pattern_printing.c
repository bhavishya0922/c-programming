/**
 * Problem: Nested Loops Pattern Printing
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int rows = 5;

    printf("--- Right-Angled Triangle ---\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n--- Inverted Pyramid ---\n");
    for (int i = rows; i >= 1; i--) {
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
