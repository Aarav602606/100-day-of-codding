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

    printf("\n--- Displaying All Student Data ---\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("-----------------------------------------\n");

    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("%d\t\t%s\t\t%.2f\n", 
               students[i].roll_no, 
               students[i].name, 
               students[i].marks);
    }

    return 0;
}

