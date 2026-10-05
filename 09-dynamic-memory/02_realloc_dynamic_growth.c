/**
 * Problem: Dynamic Buffer Resizing with realloc
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int initial_size = 3;
    int *buffer = (int*)malloc(initial_size * sizeof(int));
    if (!buffer) return 1;

    for (int i = 0; i < initial_size; i++) buffer[i] = (i + 1) * 100;

    printf("Initial Buffer (%d elements): ", initial_size);
    for (int i = 0; i < initial_size; i++) printf("%d ", buffer[i]);
    printf("\n");

    // Expand buffer to 6 elements
    int new_size = 6;
    int *temp = (int*)realloc(buffer, new_size * sizeof(int));
    if (!temp) {
        free(buffer);
        return 1;
    }
    buffer = temp;

    for (int i = initial_size; i < new_size; i++) buffer[i] = (i + 1) * 100;

    printf("Resized Buffer (%d elements): ", new_size);
    for (int i = 0; i < new_size; i++) printf("%d ", buffer[i]);
    printf("\n");

    free(buffer);
    return 0;
}
