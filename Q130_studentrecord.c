#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *filePointer;
    struct Student students[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 78.0},
        {"Charlie", 103, 92.3}
    };
    int i;
    int numRecords = 3;

    // --- Writing Records ---
    filePointer = fopen("students.dat", "w");

    if (filePointer == NULL) {
        printf("Error: Could not open students.dat for writing.\n");
        return 1;
    }

    for (i = 0; i < numRecords; i++) {
        fprintf(filePointer, "%s %d %.2f\n", 
                students[i].name, 
                students[i].rollNumber, 
                students[i].marks);
    }

    fclose(filePointer);
    printf("Successfully wrote %d records to students.dat.\n", numRecords);


    // --- Reading Records ---
    filePointer = fopen("students.dat", "r");
    
    if (filePointer == NULL) {
        printf("Error: Could not open students.dat for reading.\n");
        return 1;
    }

    printf("\n--- Reading Records from File ---\n");
    printf("Name\tRoll No.\tMarks\n");
    printf("----------------------------------\n");

    struct Student tempStudent;
    
    while (fscanf(filePointer, "%s %d %f", 
                  tempStudent.name, 
                  &tempStudent.rollNumber, 
                  &tempStudent.marks) == 3) {
        
        printf("%s\t%d\t\t%.2f\n", 
               tempStudent.name, 
               tempStudent.rollNumber, 
               tempStudent.marks);
    }

    fclose(filePointer);

    return 0;
}


