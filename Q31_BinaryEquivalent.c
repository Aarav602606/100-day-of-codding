\
    #include <stdio.h>

    int main(void) {
        unsigned int n;
        printf("Enter a non-negative integer: ");
        if (scanf("%u", &n) != 1) return 0;

        if (n == 0) {
            printf("0\n");
            return 0;
        }

        char buf[64];
        int idx = 0;
        while (n > 0) {
            buf[idx++] = (char)('0' + (n % 2));
            n /= 2;
        }
        for (int i = idx - 1; i >= 0; i--) putchar(buf[i]);
        putchar('\n');
        return 0;
    }
