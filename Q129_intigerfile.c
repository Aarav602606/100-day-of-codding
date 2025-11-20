#include <stdio.h>

int main() {
    FILE *f;
    int number;
    long long sum = 0;
    int count = 0;
    double average = 0.0;

    f = fopen("numbers.txt", "r");

    if (f == NULL) {
        printf("Error: Cannot open numbers.txt for reading. Ensure the file exists and contains integers.\n");
        return 1;
    }

    while (fscanf(f, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    fclose(f);

    if (count > 0) {
        average = (double)sum / count;
        printf("Total Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("The file contained no valid integers.\n");
    }

    return 0;
}


