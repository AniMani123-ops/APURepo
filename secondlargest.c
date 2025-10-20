#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return INT_MIN;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {2, 7, 9, 14, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);

    printf("Input: {2, 7, 9, 14, 17}\n");
    printf("Expected Output: %d\n", result);

    return 0;
}
