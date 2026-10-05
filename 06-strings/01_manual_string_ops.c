/**
 * Problem: Recreating String Standard Functions Manually
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

int my_strlen(const char* s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void my_strcpy(char* dest, const char* src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') i++;
}

int main(void) {
    const char original[] = "Computer Science";
    char buffer[50];

    my_strcpy(buffer, original);
    printf("Copied String: %s\n", buffer);
    printf("Length of String: %d characters\n", my_strlen(buffer));
    return 0;
}
