#include <stdio.h>
int main(){
	char ch;
//	printf("nhap ky tu:");
//	scanf("%c",&ch);
//	printf("ky tu vua nhap: %c",ch);
//	printf("nhap ky tu:");
//	ch = getchar();
//	putchar(ch);
	//printf("ty le hoc sinh goi \"90%%\"");
	int n = 3,m=2;
//	printf("gia tri %10d%5d\n",n,m);
//	if(n>2){
//		printf("n lon hon 2");
//	}
//	printf("chay tiep");
	
	if(n>=3)
		printf("A1");
	else if(n>4)
		printf("A2");
	else if(n<=3)
		printf("A3");
	else
		printf("A4");			
	
	int a=3,b=5,c=1;
	
	if(a>b&&a>c)
		printf("Max: a");
	else if(b>a&& b>c)
		printf("Max: b");	
	else
		printf("Max: c");
}
