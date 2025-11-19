#include <stdio.h>

int find_majority_element(int nums[], int n) {
    int candidate = -1;
    int count = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int nums1[] = {2, 2, 1, 1, 1, 2, 2};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    
    int result1 = find_majority_element(nums1, n1);

    printf("Array: {2, 2, 1, 1, 1, 2, 2}\n");
    if (result1 != -1) {
        printf("The majority element is: %d\n", result1);
    } else {
        printf("No majority element found. Result: -1\n");
    }
    
    printf("\n");
    
    int nums2[] = {1, 2, 3, 4};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    
    int result2 = find_majority_element(nums2, n2);

    printf("Array: {1, 2, 3, 4}\n");
    if (result2 != -1) {
        printf("The majority element is: %d\n", result2);
    } else {
        printf("No majority element found. Result: -1\n");
    }

    return 0;
}
