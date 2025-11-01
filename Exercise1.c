#include <stdio.h>

void asm_operations_clean(int a, int b, int *sum_out, int *diff_out) {

    __asm__ volatile (
        
        "addl %2, %0\n\t"

        
        "subl %2, %1"

        : "+r" (*sum_out),    
          "+r" (*diff_out)    
        : "r" (b)             
        :
    );
}

int main() {
    int num1 = 15;
    int num2 = 7;
    
    int result_sum = num1;   
    int result_diff = num1;

    asm_operations_clean(num1, num2, &result_sum, &result_diff);

    printf("Inputs: %d and %d\n", num1, num2);
    printf("Addition: %d\n", result_sum);
    printf("Subtraction: %d\n", result_diff);

    return 0;
}
