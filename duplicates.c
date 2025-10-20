#include <stdio.h>

int removeDuplicates(int nums[], int n) {
    if (n <= 1) {
        return n;
    }

    int i = 1;

    for (int j = 1; j < n; j++) {
        if (nums[j] != nums[i - 1]) {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int new_length = removeDuplicates(nums, n);

    for (int k = 0; k < new_length; k++) {
        printf("%d ", nums[k]);
    }
    printf("\n");

    return 0;
}
