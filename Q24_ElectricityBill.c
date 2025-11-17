\
    #include <stdio.h>

    int main(void) {
        int units;
        double bill = 0.0;
        printf("Enter units consumed: ");
        if (scanf("%d", &units) != 1) return 0;

        if (units <= 0) {
            printf("Total bill = ₹0.00\n");
            return 0;
        }

        int u = units;

        if (u > 0) {
            int slab = u > 100 ? 100 : u;
            bill += slab * 5.0;
            u -= slab;
        }
        if (u > 0) {
            int slab = u > 100 ? 100 : u;
            bill += slab * 7.0;
            u -= slab;
        }
        if (u > 0) {
            int slab = u > 100 ? 100 : u;
            bill += slab * 10.0;
            u -= slab;
        }
        if (u > 0) {
            bill += u * 12.0;
        }

        printf("Total bill = ₹%.2f\n", bill);
        return 0;
    }
