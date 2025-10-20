 printf("Reversed number: ");
    // Print the reversed number from the array
    for (int i = 0; i < size; i++) {
        // Fix: Changed to print the digits without a newline, so they appear on the same line
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes to avoid implicit declaration warnings
int storeDigits(int number, int arr[]);
void reverseArray(int arr[], int size);

// Function to store the digits of a decimal number in an array
// It also returns the number of digits
int storeDigits(int number, int arr[]) {
    int i = 0;
    // Handle the case of the number being 0
    if (number == 0) {
        arr[i] = 0;
        return 1;
    }
    // Extract digits and store them in the array
    while (number > 0) {
        arr[i] = number % 10;
        number /= 10;
        i++;
    }
    return i;
}

// Function to reverse the digits in an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int number = 12345;
    int digits[100]; // Assuming the number has at most 100 digits

    printf("Original number: %d\n", number);

    // Store digits in an array
    int size = storeDigits(number, digits);

    // Reverse the array
    reverseArray(digits, size);

    printf("Reversed number: ");
    // Print the reversed number from the array
    for (int i = 0; i < size; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
