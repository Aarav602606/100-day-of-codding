#include <stdio.h>

int main() {
    int m, n;
    
    scanf("%d", &m);
    int arr1[100];
    int i;
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &n);
    int arr2[100];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[200];
    int j = 0;
    int k = 0;
    i = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    for (i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


