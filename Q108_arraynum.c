#include <stdio.h>
#include <stdlib.h>

void product_except_self(int nums[], int n, int answer[]) {
    int i;
    int right_product;

    answer[0] = 1;

    for (i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    right_product = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * right_product;
        right_product = right_product * nums[i];
    }
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
    printf("}\n");
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int n1 = 4;
    int answer1[4];

    product_except_self(nums1, n1, answer1);
    
    printf("Input Array: ");
    print_array(nums1, n1);
    printf("Output Array: ");
    print_array(answer1, n1);

    printf("\n");

    int nums2[] = {-1, 1, 0, -3, 3};
    int n2 = 5;
    int answer2[5];

    product_except_self(nums2, n2, answer2);
    
    printf("Input Array: ");
    print_array(nums2, n2);
    printf("Output Array: ");
    print_array(answer2, n2);

    return 0;
}
