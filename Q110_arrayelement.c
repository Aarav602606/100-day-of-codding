#include <stdio.h>

void find_max_of_subarrays(int arr[], int n, int k) {
    int i, j;
    
    for (i = 0; i <= n - k; i++) {
        int current_max = arr[i];
        
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > current_max) {
                current_max = arr[j];
            }
        }
        
        printf("%d", current_max);
        
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
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
    int arr1[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n1 = 8;
    int k1 = 3;

    printf("Array: ");
    print_array(arr1, n1);
    printf(", k = %d\n", k1);
    printf("Maximums: ");
    find_max_of_subarrays(arr1, n1, k1);

    printf("\n");

    int arr2[] = {10, 5, 2, 7, 8};
    int n2 = 5;
    int k2 = 3;

    printf("Array: ");
    print_array(arr2, n2);
    printf(", k = %d\n", k2);
    printf("Maximums: ");
    find_max_of_subarrays(arr2, n2, k2);

    return 0;
}

