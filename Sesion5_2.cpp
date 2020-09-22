#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<0){
		printf("khong co gia tri");
	}else if(n==0){
		printf("so can tim: 0");
	}else if(n <2){
		printf("So can tim : 1");
	}else{
		int x1=0,x2=1,x3=1;
		for(int i=3;x2+x3<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("so can tim la: %d",x3);
	}
}
