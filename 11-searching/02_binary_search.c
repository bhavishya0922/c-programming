/**
 * Problem: Binary Search (Iterative)
 * Author: Bhavishya Dewangan
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */
#include <stdio.h>

int binary_search(const int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int sorted_arr[] = {2, 7, 14, 21, 35, 49, 63, 77, 88};
    int n = sizeof(sorted_arr) / sizeof(sorted_arr[0]);
    int target = 49;

    int idx = binary_search(sorted_arr, n, target);
    if (idx != -1) {
        printf("Target %d located at index %d\n", target, idx);
    } else {
        printf("Target %d not present\n", target);
    }
    return 0;
}
