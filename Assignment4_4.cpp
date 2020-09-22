#include <stdio.h>
int main(){
	float a,b,c;
	do{
		printf("nhap a=");
		scanf("%f",&a);
		printf("nhap b=");
		scanf("%f",&b);
		printf("nhap c=");
		scanf("%f",&c);
	}while(!(a+b>c&&a+c>b&&b+c>a));
	// tinh chu vi dien tich
}
