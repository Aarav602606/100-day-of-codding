#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source, *destination;
    int character;

    source = fopen("input.txt", "r");

    if (source == NULL) {
        printf("Error: Cannot open input.txt for reading. Ensure the file exists.\n");
        return 1;
    }

    destination = fopen("output.txt", "w");

    if (destination == NULL) {
        printf("Error: Cannot create or open output.txt for writing.\n");
        fclose(source);
        return 1;
    }

    while ((character = fgetc(source)) != EOF) {
        int upperChar = toupper(character);
        fputc(upperChar, destination);
    }

    printf("Content from input.txt successfully converted to uppercase and saved to output.txt.\n");

    fclose(source);
    fclose(destination);

    return 0;
}

