#include <stdio.h>
int main(){
	int n,uoc=0;
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			uoc++;
			break;
		}
	}
	printf("uoc = %d\n",uoc);
	if(uoc==0){
		printf("day la so nguyen to");
	}else{
		printf("khong phai SNT");
	}
}

