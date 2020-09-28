#include <stdio.h>
#include "assignment7.h"
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		// nhap arr[i]
		// sau do sap xep mang 0 -> i
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			// sap xep mang con co i+1 gia tri
			SapXepMang2(arr,i+1);
		}
	}
	printf("mang sau khi nhap:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}	
}
