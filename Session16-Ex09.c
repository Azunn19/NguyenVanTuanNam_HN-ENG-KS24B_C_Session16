#include<stdio.h>
void AddElement(int *arr,int value,int index){
	int Length = 5;
	if(index <= Length){
		for (int i = Length; i >= index; i--) {
            arr[i] = arr[i - 1];
            if(i == index){
            	arr[i - 1] = value;
			}
        }
	}
	else{
		arr[index] = value;
	}
}

int main(){
    int arr[] = {1,2,3,4,5};
    int Length = sizeof(arr) / sizeof(arr[0]);
    int value, index;
    printf("Hay nhap gia tri muon them vao mang: ");
    scanf("%d",&value);
    printf("Hay nhap vi tri muon them: ");
    scanf("%d",&index);
    if(index < 1){
    	printf("Vi tri khong hop le\n");
	}
    else{
    	printf("Mang ban dau: ");
    	for (int i = 0;i < Length;i++){
    		printf("%d ",arr[i]);
		}
	    AddElement(arr,value,index);
		printf("\nMang sau khi them: ");
		Length++;
    	for (int i = 0;i < Length;i++){
    		printf("%d ",arr[i]);
		}	
	}
	
	return 0;
}

