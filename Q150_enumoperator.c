#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float gpa;
};

void modify_student(struct Student *s_ptr) {
    printf("--- Function: Display and Modify ---\n");
    printf("Before Modification (in function):\n");
    printf("ID: %d\n", s_ptr->id);
    printf("Name: %s\n", s_ptr->name);
    printf("GPA: %.2f\n", s_ptr->gpa);

    s_ptr->id = 500;
    strcpy(s_ptr->name, "Charles");
    s_ptr->gpa = 4.0;

    printf("\nAfter Modification (in function):\n");
    printf("ID: %d\n", s_ptr->id);
    printf("Name: %s\n", s_ptr->name);
    printf("GPA: %.2f\n", s_ptr->gpa);
}

int main() {
    struct Student student_record = {101, "Alice", 3.8};

    printf("--- Main: Initial Data ---\n");
    printf("ID: %d\n", student_record.id);
    printf("Name: %s\n", student_record.name);
    printf("GPA: %.2f\n", student_record.gpa);

    modify_student(&student_record);

    printf("\n--- Main: Data After Function Call ---\n");
    printf("ID: %d\n", student_record.id);
    printf("Name: %s\n", student_record.name);
    printf("GPA: %.2f\n", student_record.gpa);

    return 0;
}


