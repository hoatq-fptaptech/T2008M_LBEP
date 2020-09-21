#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Nhap so can tim kiem:");
	scanf("%d",&x);
	//bool c = false;
	int i=0;
	for(;i<n;i++){
		if(x==ary[i]){
			printf("%d nam trong mang",x);
			c = true;
			break;
		}
	}
	if(i>=n){
		printf("Ko co x trong mang");
	}
//	if(!c){
//		printf("Ko co x trong mang");
//	}

	// 
}
