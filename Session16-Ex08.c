#include<stdio.h>
#include<string.h>
int main(){
    char inputString[100];
    char reverseString[100];
    printf("Hay nhap mot chuoi bat ky: ");
    fgets(inputString, sizeof(inputString), stdin);
    int length = strlen(inputString);
    for (int i = 0; i < length; i++) {
        reverseString[i] = inputString[length - 1 - i];
    }
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

	return 0;
}

