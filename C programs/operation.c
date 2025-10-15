#include <stdio.h>

int main() {
    float num1, num2, sum, difference, product, quotient;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (num2 != 0) ? (num1 / num2) : 0;
    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = ");
    num2 ? printf("%.2f\n", quotient) : printf("undefined (division by zero)\n");

    return 0;
}
