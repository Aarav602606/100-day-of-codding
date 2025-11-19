#include <stdio.h>
#include <stdlib.h>

void find_previous_greater_elements(int arr[], int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        int previous_greater = -1;
        
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_greater = arr[j];
                break;
            }
        }
        
        printf("%d", previous_greater);
        
        if (i < n - 1) {
            printf(", ");
        }
    }
    
    printf("\n");
}

int main() {
    int arr1[] = {4, 5, 2, 25};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Array: {4, 5, 2, 25}\n");
    printf("Previous Greater Elements: ");
    find_previous_greater_elements(arr1, n1); 

    int arr2[] = {13, 7, 6, 12};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nArray: {13, 7, 6, 12}\n");
    printf("Previous Greater Elements: ");
    find_previous_greater_elements(arr2, n2); 

    int arr3[] = {1, 3, 2, 4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    printf("\nArray: {1, 3, 2, 4}\n");
    printf("Previous Greater Elements: ");
    find_previous_greater_elements(arr3, n3); 

    return 0;
}