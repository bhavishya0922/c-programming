/**
 * Problem: String Palindrome Verification
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(void) {
    const char* word1 = "Radar";
    const char* word2 = "Student";

    printf("'%s' is %s\n", word1, is_palindrome(word1) ? "a Palindrome" : "NOT a Palindrome");
    printf("'%s' is %s\n", word2, is_palindrome(word2) ? "a Palindrome" : "NOT a Palindrome");
    return 0;
}
