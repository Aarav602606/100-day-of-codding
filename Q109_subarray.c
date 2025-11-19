#include <stdio.h>
#include <limits.h>

long long find_max_subarray_sum(int arr[], int n, int k) {
    if (n < k) {
        return 0;
    }

    long long current_sum = 0;
    int i;

    for (i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

void print_array(int arr[], int n) {
    int i;
    printf("{");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}");
}

int main() {
    int arr1[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    
    long long result1 = find_max_subarray_sum(arr1, n1, k1);

    printf("Array: ");
    print_array(arr1, n1);
    printf(", k = %d\n", k1);
    printf("Maximum Subarray Sum: %lld\n", result1);

    printf("\n");

    int arr2[] = {5, 8, 3, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    long long result2 = find_max_subarray_sum(arr2, n2, k2);

    printf("Array: ");
    print_array(arr2, n2);
    printf(", k = %d\n", k2);
    printf("Maximum Subarray Sum: %lld\n", result2);

    return 0;
}


