#include <stdio.h>
int main(){
    char c = 'A';
    char *pc = &c;
    printf("c = %c, *pc = %c\n", c , *pc);
    *pc = 'Z';
    printf("After *pc='Z', c = %c\n", c);
}
