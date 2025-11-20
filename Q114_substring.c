#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int charPresence[256] = {0};
    int i = 0;
    int j = 0;
    int maxLen = 0;

    for (j = 0; j < n; j++) {
        charPresence[s[j]]++;

        while (charPresence[s[j]] > 1) {
            charPresence[s[i]]--;
            i++;
        }

        int currentLen = j - i + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}