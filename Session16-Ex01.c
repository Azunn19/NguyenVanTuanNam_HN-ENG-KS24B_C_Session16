#include<stdio.h>
int main() {
    int x = 100;
    int *ptr = &x;
    printf("x = %d, &x = %p\n", x, &x);
    printf("*ptr = %d, ptr = %p\n", *ptr, ptr);

    return 0;
}
