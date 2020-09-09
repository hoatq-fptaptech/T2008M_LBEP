#include <stdio.h>
int main(){
	// input a,b,c
	int a,b,c;
	printf("NHap a = ");
	scanf("%d",&a);
	printf("NHap b = ");
	scanf("%d",&b);
	printf("NHap c = ");
	scanf("%d",&c);
	
	// kiem tra a va b
	if(a>b){
		// a la so lon
		if(a>c){
			printf("Max: %d",a);
		}else{
			printf("Max: %d",c);
		}
	}else{
		// b la so lon
		if(b>c){
			printf("Max: %d",b);
		}else{
			printf("Max: %d",c);
		}
	}
}

