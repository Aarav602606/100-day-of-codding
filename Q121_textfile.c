#include <stdio.h>

int main() {
    FILE *filePointer;
    char name[100];
    int age;

    printf("Enter your name: ");
    if (scanf("%s", name) != 1) {
        return 1;
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        return 1;
    }

    filePointer = fopen("info.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    fclose(filePointer);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}


