\
    #include <stdio.h>

    int main(void) {
        int n;
        long long product = 1;
        int found = 0;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        for (int i = 2; i <= n; i += 2) {
            product *= i;
            found = 1;
        }

        if (!found) product = 0;
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
        return 0;
    }
