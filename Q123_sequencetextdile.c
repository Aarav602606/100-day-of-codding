#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f;
    int c;
    long cc = 0;
    long wc = 0;
    long lc = 0;
    int inWord = 0;

    f = fopen("info.txt", "r");

    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(f)) != EOF) {
        cc++;

        if (c == '\n') {
            lc++;
            inWord = 0;
        } else if (isspace(c)) {
            inWord = 0;
        } else {
            if (inWord == 0) {
                wc++;
                inWord = 1;
            }
        }
    }

    if (cc > 0 && lc == 0) {
        lc = 1;
    }

    fclose(f);

    printf("Total Characters: %ld\n", cc);
    printf("Total Words: %ld\n", wc);
    printf("Total Lines: %ld\n", lc);

    return 0;
}