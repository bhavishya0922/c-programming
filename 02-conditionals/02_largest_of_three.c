/**
 * Problem: Finding the Largest of Three Numbers
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int n1 = 45, n2 = 82, n3 = 63;
    int largest;

    if (n1 >= n2 && n1 >= n3) {
        largest = n1;
    } else if (n2 >= n1 && n2 >= n3) {
        largest = n2;
    } else {
        largest = n3;
    }

    printf("Among %d, %d, %d -> Largest is %d\n", n1, n2, n3, largest);
    return 0;
}
