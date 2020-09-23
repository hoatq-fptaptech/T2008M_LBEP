#include <stdio.h>
int main(){
	int arr[5] = {23,90,9,25,16};
	
	for(int i=1;i<5;i++){
		int j=i-1;
		int tmp = arr[i];
		while(j>=0&& tmp< arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = tmp;
	}
	
	printf("mang sau khi sap xep:\n");
	for(int i=0;i<5;i++){
		printf("%5d",arr[i]);
	}
}
