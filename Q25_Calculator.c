\
    #include <stdio.h>

    int main(void) {
        char op;
        double a, b;
        printf("Enter operator (+ - * / %%) and two operands separated by spaces: ");
        if (scanf(" %c %lf %lf", &op, &a, &b) != 3) return 0;

        switch (op) {
            case '+':
                printf("Result = %.6g\n", a + b);
                break;
            case '-':
                printf("Result = %.6g\n", a - b);
                break;
            case '*':
                printf("Result = %.6g\n", a * b);
                break;
            case '/':
                if (b == 0.0) printf("Error: Division by zero\n");
                else printf("Result = %.6g\n", a / b);
                break;
            case '%':
                if ((int)b == 0) printf("Error: Division by zero\n");
                else printf("Result = %d\n", (int)a % (int)b);
                break;
            default:
                printf("Unknown operator\n");
                break;
        }

        return 0;
    }
