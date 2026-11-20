#include <stdio.h>

int arraySum(int arr[], int size) {
        if (size <= 0) {
        return 0;
    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Array sum = %d\n", arraySum(nums, n)); 
    return 0;
}
