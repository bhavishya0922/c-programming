/**
 * Problem: File I/O Streams in C
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int main(void) {
    const char *filename = "sample_output.txt";

    // Write to file
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for write");
        return 1;
    }

    fprintf(fp, "C Programming Coursework\n");
    fprintf(fp, "Student: Bhavishya Dewangan\n");
    fprintf(fp, "Semester: 3\n");
    fclose(fp);

    // Read back from file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for read");
        return 1;
    }

    char line[128];
    printf("Contents read from %s:\n", filename);
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("> %s", line);
    }
    fclose(fp);
    return 0;
}
