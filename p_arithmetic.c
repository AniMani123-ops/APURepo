#include <stdio.h>
int main(){
    int a[] = {10,20,30};
    int *p = a;
    printf("*p = %d\n", *p);
    p++;
    printf("*p = %d\n", *p);
}
