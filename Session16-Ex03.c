#include<stdio.h>
void Sum(int a,int b,int *result){
	*result = a + b;
}
int main(){
    int a = 100;
    int b = 100;
    int result;
    Sum(a,b,&result);
    printf("Tong = %d",result);
    
	return 0;
}

