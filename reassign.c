#include <stdio.h>
int main() {
    int x =5, y = 20;
    int *p = &x;
    printf("*p = %d\n", *p);
    p = &y;
    printf("*p = %d\n", *p);
}
