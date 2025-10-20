#include <stdio.h>
struct Point {
    int x, y;
};
int main() {
    struct Point p1= {10,20};
    struct Point *ptr = &p1;
    printf("x=%d, y=%d\n", ptr->x, ptr->y);
    ptr->x = 50;
    printf("After change: x=%d, y=%d\n", p1.x, p1.y);
}

