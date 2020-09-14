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
	
	if(a>=b && a>=c){
		printf("Max: %d",a);
	}
	if(b>=a && b>=c){
		printf("Max: %d",b);
	}
	if(c>=a && c>=b){
		printf("Max: %d",c);
	}
}
