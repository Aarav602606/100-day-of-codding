\
    #include <stdio.h>

    int main(void) {
        int n;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        printf("Factors of %d: ", n);
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) printf("%d ", i);
        }
        printf("\n");
        return 0;
    }
