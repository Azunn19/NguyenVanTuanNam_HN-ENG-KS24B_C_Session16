#include<stdio.h>
void DoiCho(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 96, y = 69;
    printf("Truoc: x = %d, y = %d\n", x, y);
    DoiCho(&x, &y);
    printf("Sau x = %d, y = %d\n", x, y);

    return 0;
}
