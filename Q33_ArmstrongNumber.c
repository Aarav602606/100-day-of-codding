\
    #include <stdio.h>
    #include <math.h>

    int main(void) {
        int n;
        printf("Enter a number: ");
        if (scanf("%d", &n) != 1) return 0;

        int temp = n;
        int digits = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        if (digits == 0) digits = 1; /* handle 0 */

        temp = n;
        int sum = 0;
        while (temp != 0) {
            int d = temp % 10;
            sum += (int)pow(d, digits);
            temp /= 10;
        }

        if (sum == n) printf("Armstrong\n");
        else printf("Not Armstrong\n");

        return 0;
    }
