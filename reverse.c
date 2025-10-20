
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
int main(){
    int number = 12345;
    int digits[100]; // Assuming the number has at most 100 digits

    printf("Original number: %d\n", number);

    // Store digits in an array
    int size = storeDigits(number, digits);

    

    printf("Reversed number: ");
    // Print the reversed number from the array
    for (int i = 0; i < size; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}
