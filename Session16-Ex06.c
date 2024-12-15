#include<stdio.h>
int Search(int *arr,int value){
    for (int i = 0; i < 5; i++){
        if (arr[i] == value){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int value;
    printf("Hay nhap gia tri ban can tim: ");
    scanf("%d",&value);
    int index = Search(arr,value);
    if(index == -1) {
    	printf("Gia tri %d khong ton tai trong mang\n",value);
    }
	else{
        printf("Gia tri %d nam o vi tri %d\n",value,index + 1);
    }

    return 0;
}
