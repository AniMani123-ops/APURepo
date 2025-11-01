#include <stdio.h>

int main() {
    unsigned int value = 0x000F0000;
    int leading_zeros;

    printf("--- Count Leading Zeros (CLZ) Demonstration ---\n");
    printf("Input value: 0x%X\n", value);

    if (value == 0) {
        leading_zeros = 32;
    } else {
        __asm__ volatile (
            "bsrl %1, %0\n\t"
            "negl %0\n\t"
            "addl $31, %0"
            : "=r" (leading_zeros)
            : "r" (value)
            : "cc"
        );
    }

    printf("Number of leading zeros: %d\n", leading_zeros);

    return 0;
}
