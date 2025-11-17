\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
        char s[256];
        printf("Enter a binary string: ");
        if (scanf("%255s", s) != 1) return 0;

        size_t len = strlen(s);
        for (size_t i = 0; i < len; i++) {
            if (s[i] == '0') putchar('1');
            else if (s[i] == '1') putchar('0');
            else {
                printf("\nInvalid binary input\n");
                return 0;
            }
        }
        putchar('\n');
        return 0;
    }
