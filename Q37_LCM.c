\
    #include <stdio.h>

    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int main(void) {
        long long a, b;
        printf("Enter two integers separated by space: ");
        if (scanf("%lld %lld", &a, &b) != 2) return 0;
        if (a == 0 || b == 0) {
            printf("LCM = 0\n");
            return 0;
        }
        long long g = gcd(a < 0 ? -a : a, b < 0 ? -b : b);
        long long l = (a / g) * b;
        if (l < 0) l = -l;
        printf("LCM = %lld\n", l);
        return 0;
    }
