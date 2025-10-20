#include <stdio.h>
void increment(int *p) {
     (*p)++;
}
int main() {
    int n = 10;
    increment(&n);
    printf("n = %d\n", n);
}
