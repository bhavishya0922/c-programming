/**
 * Problem: Simple Calculator Using Switch Case
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    char op = '*';
    double a = 12.5, b = 4.0;
    double result = 0.0;

    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b != 0) result = a / b;
            else { printf("Error: Division by zero\n"); return 1; }
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", a, op, b, result);
    return 0;
}
