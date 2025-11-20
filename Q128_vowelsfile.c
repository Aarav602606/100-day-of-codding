#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    int c;
    int vowelCount = 0;
    int consonantCount = 0;

    f = fopen("input.txt", "r");

    if (f == NULL) {
        printf("Error: Cannot open input.txt for reading. Ensure the file exists.\n");
        return 1;
    }

    while ((c = fgetc(f)) != EOF) {
        int lowerC = tolower(c);

        if (lowerC >= 'a' && lowerC <= 'z') {
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    fclose(f);

    printf("Vowel Count: %d\n", vowelCount);
    printf("Consonant Count: %d\n", consonantCount);

    return 0;
}
