#include <stdio.h>

int pivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i])
            return i;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int index = pivotIndex(arr, n);
    printf("Pivot index: %d\n", index);
    return 0;
}
