#include <stdio.h>
#include <string.h>

struct Student {
    int studentId;
    float gpa;
    char name[50];
};

struct Student getTopStudent() {
    struct Student topStudent;
    topStudent.studentId = 1001;
    topStudent.gpa = 3.95;
    strcpy(topStudent.name, "Alice Johnson");
    return topStudent;
}

void printStudent(struct Student studentData) {
    printf("Student ID: %d\n", studentData.studentId);
    printf("Name: %s\n", studentData.name);
    printf("GPA: %.2f\n", studentData.gpa);
}

int main() {
    struct Student awardWinner;

    printf("Fetching details of the top student...\n");
    awardWinner = getTopStudent();

    printf("--- Top Student Details ---\n");
    printStudent(awardWinner);

    return 0;
}

