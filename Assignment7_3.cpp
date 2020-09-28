#include <stdio.h>
#include "assignment7.h"
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		// nhap gia tri cho arr[i] 
		int x;
		// thay vi nhap cho arr[i], nhap gt cho x, sau 
		//do kiem tra x co nam trong mang hay chua
		bool flag;
		do{	
			printf("Nhap gia tri arr[%d]: ",i);
			scanf("%d",&x);
			flag = TimKiem(arr,i,x);
			if(flag == false){
				arr[i] = x;
			}
		}while(flag);
	}
	printf("Mang sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
