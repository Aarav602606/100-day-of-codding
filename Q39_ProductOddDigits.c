\
    #include <stdio.h>

    int main(void) {
        long n;
        printf("Enter a number: ");
        if (scanf("%ld", &n) != 1) return 0;

        if (n < 0) n = -n;
        long product = 1;
        int found = 0;
        while (n > 0) {
            int d = n % 10;
            if (d % 2 == 1) {
                product *= d;
                found = 1;
            }
            n /= 10;
        }
        if (!found) product = 0;
        printf("Product of odd digits = %ld\n", product);
        return 0;
    }
