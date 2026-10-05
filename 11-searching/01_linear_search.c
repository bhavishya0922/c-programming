/**
 * Problem: Linear Search
 * Author: Bhavishya Dewangan
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
#include <stdio.h>

int linear_search(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main(void) {
    int arr[] = {15, 3, 29, 44, 8, 91, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 44;

    int idx = linear_search(arr, n, target);
    if (idx != -1) {
        printf("Element %d found at index %d\n", target, idx);
    } else {
        printf("Element %d not found\n", target);
    }
    return 0;
}
