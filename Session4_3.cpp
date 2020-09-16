#include <stdio.h>
int main(){
	int A,B=0;
	printf("nhap A=");
	scanf("%d",&A);
//	while(A!=0){
//		B = B*10+A%10;
//		A/=10;
//	}
	
	for( ;A!=0;A/=10){
		B = B*10+A%10;
	}
	printf("Nghich dao: %d",B);
}
