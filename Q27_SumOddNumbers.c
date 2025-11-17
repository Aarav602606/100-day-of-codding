\
    #include <stdio.h>

    int main(void) {
        int n;
        long sum = 0;
        printf("Enter n (number of odd terms): ");
        if (scanf("%d", &n) != 1) return 0;

        for (int i = 1, count = 0; count < n; i += 2, count++) {
            sum += i;
        }

        printf("Sum of first %d odd numbers = %ld\n", n, sum);
        return 0;
    }
