#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a positive number n: ");
    scanf("%d", &n);
    for(i = 1; i <= 2*n; i += 2) 
    {
        sum += i;
    }
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
