#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[100];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeatedElement = 0;
    
    for (i = 0; i < n; i++) {
        repeatedElement ^= nums[i];
    }
    
    for (i = 1; i < n; i++) {
        repeatedElement ^= i;
    }

    printf("%d\n", repeatedElement);
    
    return 0;
}