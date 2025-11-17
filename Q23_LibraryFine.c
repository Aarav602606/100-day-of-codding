\
    #include <stdio.h>

    int main(void) {
        int days;
        printf("Enter number of late days: ");
        if (scanf("%d", &days) != 1) return 0;

        if (days > 30) {
            printf("Membership Cancelled\n");
            return 0;
        }

        int fine = 0;

        if (days > 0) {
            int d = days < 5 ? days : 5;
            fine += d * 2;
            days -= d;
        }
        if (days > 0) {
            int d = days < 5 ? days : 5;
            fine += d * 4;
            days -= d;
        }
        if (days > 0) {
            int d = days < 20 ? days : 20;
            fine += d * 6;
            days -= d;
        }

        printf("Total fine: ₹%d\n", fine);
        return 0;
    }
