#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char text[1000];
    char fileName[100];

    printf("Enter file name to append to: ");
    if (scanf("%s", fileName) != 1) {
        return 1;
    }
    
    while ((getchar()) != '\n'); 

    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }

    filePointer = fopen(fileName, "a");

    if (filePointer == NULL) {
        printf("Error: Could not open file %s for appending.\n", fileName);
        return 1;
    }
    
    fprintf(filePointer, "\n%s", text);

    fclose(filePointer);

    printf("Text successfully appended to %s.\n", fileName);

    return 0;
}
