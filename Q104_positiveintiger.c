#include <stdio.h>
#include <math.h>

int find_pivot_integer(int n) {
    long long total_sum_1_to_n = (long long)n * (n + 1) / 2;
    
    long long s_target = total_sum_1_to_n;
    
    long double sqrt_result = sqrtl((long double)s_target);
    
    long long x = (long long)sqrt_result;
    
    if (x * x == s_target) {
        if (x <= n) {
            return (int)x;
        }
    }
    
    return -1;
}

int main() {
    int n;

    printf("Enter a positive integer n (e.g., 8, 49): ");
    
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int pivot = find_pivot_integer(n);

    if (pivot != -1) {
        printf("\nFor n = %d, the pivot integer is x = %d.\n", n, pivot);
        printf("Check: Sum(1 to %d) equals Sum(%d to %d).\n", pivot, pivot, n);
    } else {
        printf("\nFor n = %d, no pivot integer exists. Result: -1.\n", n);
    }

    return 0;
}


