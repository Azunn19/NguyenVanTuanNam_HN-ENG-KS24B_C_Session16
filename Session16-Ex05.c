#include<stdio.h>
void UpdateElement(int *arr,int value,int index){
	int Length = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < Length;i++){
		arr[index] = value;
	}
}
int main(){
	int arr[] = {1,2,3,4,5};
	int value, index;
	int Length = sizeof(arr) / sizeof(arr[0]);
	printf("Hay nhap vi tri muon thay the: ");
	scanf("%d",&index);
	printf("Hay nhap gia tri moi: ");
	scanf("%d",&value);
	if(index < 0 || index > Length - 1 ){
		printf("Vi tri khong hop le");
	}
	else{
		printf("Mang ban dau:\n");
		for (int i = 0;i < Length;i++){
			printf("arr[%d] = %d\n",i,arr[i]);
		}
		UpdateElement(arr,value,index);
		printf("Mang sau khi cap nhat:\n");
		for (int i = 0;i < Length;i++){
			printf("arr[%d] = %d\n",i,arr[i]);
		}
	}

	return 0;
}

