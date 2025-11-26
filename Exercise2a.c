#include <stdio.h>

void xor_swap_asm(int *a, int *b) {
    __asm__ volatile (
        "xorl %1, %0\n\t"
        "xorl %0, %1\n\t"
        "xorl %1, %0"
        : "+r" (*a), "+r" (*b)
        :
        : "cc"
    );
}

int main() {
    int val_a = 42;
    int val_b = 17;

    printf("--- XOR Swap Demonstration ---\n");
    printf("Before swap: A = %d, B = %d\n", val_a, val_b);

    xor_swap_asm(&val_a, &val_b);

    printf("After swap: A = %d, B = %d\n", val_a, val_b);

    return 0;
}
