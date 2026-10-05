/**
 * Problem: Student Record Modeling with Structures
 * Author: Bhavishya Dewangan
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    float sgpa;
    int semester;
} Student;

void print_student(const Student *s) {
    printf("Roll No: %d | Name: %s | Sem: %d | SGPA: %.2f\n",
           s->roll_no, s->name, s->semester, s->sgpa);
}

int main(void) {
    Student s1;
    s1.roll_no = 101;
    strcpy(s1.name, "Bhavishya Dewangan");
    s1.semester = 3;
    s1.sgpa = 8.85f;

    print_student(&s1);
    return 0;
}
