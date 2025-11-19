#include <stdio.h>

void solve() {
    int n, k;
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

    printf("Enter the window size (k): ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid window size.\n");
        return;
    }

    int queue[n];
    int front = 0;
    int rear = 0;
    int first = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            queue[rear] = i;
            rear++;
        }

        if (i >= k - 1) {
            if (!first) {
                printf(" ");
            }

            if (front < rear) {
                if (queue[front] <= i - k) {
                    front++;
                }
                if (front < rear) {
                    printf("%d", arr[queue[front]]);
                } else {
                    printf("0");
                }
            } else {
                printf("0");
            }
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    solve();
    return 0;
}

