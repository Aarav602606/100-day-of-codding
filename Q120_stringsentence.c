#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[1000];
    
    if (fgets(s, 1000, stdin) == NULL) {
        return 0;
    }

    size_t n = strlen(s);

    if (n > 0 && (s[n - 1] == '\n' || s[n - 1] == '\r')) {
        s[n - 1] = '\0';
        n--;
    }

    if (n == 0) {
        printf("\n");
        return 0;
    }

    int i;
    for (i = 0; i < n; i++) {
        if (i == 0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;
}