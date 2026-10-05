/**
 * Problem: Array of Structures for Cohort Management
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>

typedef struct {
    char code[10];
    char name[40];
    int credits;
} Subject;

int main(void) {
    Subject syllabus[] = {
        {"CS301", "Data Structures", 4},
        {"CS302", "Object Oriented Programming", 3},
        {"CS303", "Digital Logic Design", 3},
        {"CS304", "Discrete Mathematics", 4}
    };

    int count = sizeof(syllabus) / sizeof(syllabus[0]);
    int total_credits = 0;

    printf("Semester 3 Curriculum:\n");
    for (int i = 0; i < count; i++) {
        printf("[%s] %-30s | Credits: %d\n", syllabus[i].code, syllabus[i].name, syllabus[i].credits);
        total_credits += syllabus[i].credits;
    }
    printf("Total Academic Credits: %d\n", total_credits);
    return 0;
}
