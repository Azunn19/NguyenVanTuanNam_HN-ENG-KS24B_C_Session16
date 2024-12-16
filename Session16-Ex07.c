#include<stdio.h>
void SapXep(int *arr){
	for (int i=0;i<7;i++){
		for (int j=0;j<7-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main(){
    int arr[] = {3,1,5,2,7,6,4};
    SapXep(arr);
    for(int i = 0;i < 7;i++){
    	printf("%d ",arr[i]);
	}
    
	return 0;
}

