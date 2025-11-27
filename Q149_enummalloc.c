#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    int age;
    float gpa;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    ptr->id = 101;
    ptr->age = 20;
    ptr->gpa = 3.85;

    printf("Student Details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Age: %d\n", ptr->age);
    printf("GPA: %.2f\n", ptr->gpa);

    free(ptr);

    return 0;
}



