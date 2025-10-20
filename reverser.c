#include <stdio.h>

void rotateArray(int arr[], int len, int k) {
    int i, j, temp;

    k = k % len;

    for (i = 0; i < k; i++) {

        temp = arr[len - 1];

        for (j = len - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }
}

int main() {
    int arr[] = {4, 1, 2, 9, 7, 3};
    int len = 6;
    int k = 2;
    printf("Original array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArray(arr, len, k);

    printf("Rotated array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
