#include <stdio.h>

int findFirst(int arr[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int findLast(int arr[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    printf("First and Last Occurrence Index: %d, %d\n", first, last);
    return 0;
}
