\
    #include <stdio.h>

    int main(void) {
        long n;
        printf("Enter a number: ");
        if (scanf("%ld", &n) != 1) return 0;

        long x = n < 0 ? -n : n;
        long rev = 0;

        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        if (n < 0) rev = -rev;
        printf("Reversed number = %ld\n", rev);
        return 0;
    }
