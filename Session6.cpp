#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	int max = ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]>max){
			max = ary[i];
		}
	}
	printf("MAX: %d\n",max);
	int max1;
	for(int i=0;i<n;i++){
		if(ary[i]<max){
			max1=ary[i];
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(ary[i]>max1 && ary[i]<max){
			max1 = ary[i];
		}
	}
	printf("Near MAX: %d",max1);
	
	
}
