/**
 * Problem: Array Extrema & Statistical Metrics
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    int arr[] = {34, 12, 89, 5, 67, 92, 43, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0], max = arr[0];
    long sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    printf("Array Elements (%d): ", n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nMin: %d | Max: %d | Average: %.2f\n", min, max, (float)sum / n);
    return 0;
}
