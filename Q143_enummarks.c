#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;
    int maxIndex = 0; 

    printf("--- Enter Details for 5 Students ---\n");

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        if (scanf("%s", students[i].name) != 1) {
            return 1;
        }

        printf("Enter roll number: ");
        if (scanf("%d", &students[i].roll_no) != 1) {
            return 1;
        }

        printf("Enter marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            return 1;
        }
    }

    for (i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
