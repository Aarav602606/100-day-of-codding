#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFileName[100];
    char destinationFileName[100];
    int character;

    printf("Enter source file name: ");
    if (scanf("%s", sourceFileName) != 1) {
        return 1;
    }

    printf("Enter destination file name: ");
    if (scanf("%s", destinationFileName) != 1) {
        return 1;
    }

    source = fopen(sourceFileName, "r");

    if (source == NULL) {
        printf("Error: Cannot open source file %s.\n", sourceFileName);
        return 1;
    }

    destination = fopen(destinationFileName, "w");

    if (destination == NULL) {
        printf("Error: Cannot open destination file %s.\n", destinationFileName);
        fclose(source);
        return 1;
    }

    while ((character = fgetc(source)) != EOF) {
        fputc(character, destination);
    }

    printf("Content successfully copied from %s to %s.\n", sourceFileName, destinationFileName);

    fclose(source);
    fclose(destination);

    return 0;
}

