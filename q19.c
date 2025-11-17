#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
    return 0;
}