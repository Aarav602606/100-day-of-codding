#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[100];
    int i;
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &nums[i]);
    }

    long long actualSum = 0;
    for (i = 0; i < n - 1; i++) {
        actualSum += nums[i];
    }

    long long expectedSum = (long long)n * (n + 1) / 2;

    int missingNumber = expectedSum - actualSum;

    printf("%d\n", missingNumber);

    return 0;
}
