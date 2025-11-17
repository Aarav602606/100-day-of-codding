\
    #include <stdio.h>

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int main(void) {
        int a, b;
        printf("Enter two integers separated by space: ");
        if (scanf("%d %d", &a, &b) != 2) return 0;

        if (a < 0) a = -a;
        if (b < 0) b = -b;
        printf("GCD = %d\n", gcd(a, b));
        return 0;
    }
