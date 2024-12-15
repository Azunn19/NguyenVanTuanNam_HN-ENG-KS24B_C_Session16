#include<stdio.h>
void PrintArray(int *arr,int Length){
	for (int i = 0;i < Length;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
int main(){
    int arr[] = {1,2,3,4,5};
    int Length = 5;
    PrintArray(arr,Length);
    
	return 0;
}

