#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char t[1000];
    scanf("%s", s);
    scanf("%s", t);

    int n1 = strlen(s);
    int n2 = strlen(t);

    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    int i;

    for (i = 0; i < n1; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
