#include <stdio.h>
int main(){
	int A,B=0;
	printf("nhap A=");
	scanf("%d",&A);
	if(A>0&&A<10000){
		B=B*10 + A%10;
		A/=10;
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B=B*10 + A%10;
			A/=10;
		}
		printf("Ngich dao: %d",B);
	}
}
