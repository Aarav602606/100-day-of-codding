#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT = 2,
    MULTIPLY = 3
};

void printMenu() {
    printf("--- Calculator Menu ---\n");
    printf("%d. ADD\n", ADD);
    printf("%d. SUBTRACT\n", SUBTRACT);
    printf("%d. MULTIPLY\n", MULTIPLY);
    printf("Enter your choice (1, 2, or 3): ");
}

int main() {
    int choice;
    double num1, num2;
    double result;

    printMenu();
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice < ADD || choice > MULTIPLY) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    enum Operation op = (enum Operation)choice;

    switch (op) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        default:
            printf("Internal error with operation choice.\n");
            break;
    }

    return 0;
}