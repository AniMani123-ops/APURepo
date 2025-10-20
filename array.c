#include <stdio.h>

void sortArray(int arr[], int size){
     int count=0;

     for (int i=0; i<size; i++){
	 if (arr[i]==0){
	    int temp = arr[i];
	    arr[i]=arr[count];
   	    arr[count] = temp;

	    count++;
}}}

int main(){
    int arr[] = {0,1,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for(int i=0; i<n; i++){
	printf("%d", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);
    printf("Sorted Array: ");
    for (int i=0; i<n; i++){
	printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}
