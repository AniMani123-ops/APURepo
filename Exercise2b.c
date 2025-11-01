#include <stdio.h>

int main() {
    unsigned int value = 0x12345678;
    unsigned char count = 8;

    printf("--- Bit Rotation Demonstration ---\n");
    printf("Initial value: 0x%X\n", value);
    printf("Rotation count: %d (left)\n", count);

    __asm__ volatile (
        "roll %%cl, %0"
        : "+r" (value)
        : "c" (count)
        : "cc"
    );

    printf("Rotated value: 0x%X\n", value);

    return 0;
}
