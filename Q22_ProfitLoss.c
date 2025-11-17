\
    #include <stdio.h>

    int main(void) {
        double cp, sp;
        printf("Enter cost price and selling price separated by space: ");
        if (scanf("%lf %lf", &cp, &sp) != 2) return 0;

        if (cp == 0.0) {
            printf("Cost price cannot be zero\n");
            return 0;
        }

        if (sp > cp) {
            double profit = sp - cp;
            double percent = (profit / cp) * 100.0;
            printf("Profit: %.2f, Profit Percentage: %.2f%%\n", profit, percent);
        } else if (sp < cp) {
            double loss = cp - sp;
            double percent = (loss / cp) * 100.0;
            printf("Loss: %.2f, Loss Percentage: %.2f%%\n", loss, percent);
        } else {
            printf("No profit, no loss\n");
        }

        return 0;
    }
