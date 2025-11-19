#include <stdio.h>

void max(int *a, int b) {
    if (b > *a) {
        *a = b;
    }
}

void solve() {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return;
    }

    int arr[n];
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 0) {
        printf("Maximum sum: 0\n");
        return;
    }

    int max_so_far = arr[0];
    int current_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    printf("Maximum sum: %d\n", max_so_far);
}

int main() {
    solve();
    return 0;
}
