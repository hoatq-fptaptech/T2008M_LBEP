#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		int p = a+b+c;
		printf("%d %d %d la 3 canh tam giac\n",a,b,c);
		printf("Chu vi: %d\n",p);
		// tinh dien tich
		float pi = 3.14158;
		int x = (int)pi;
		float p2 = (float)p;// ep kieu
		p2 = p2/2;
		float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("Dien tich: %f\n",s);
	}else{
		printf("%d %d %d ko phai la 3 canh tam giac",a,b,c);
	}
}

