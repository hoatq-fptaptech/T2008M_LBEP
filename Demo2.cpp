#include <stdio.h>
int main(){
	int num;
	printf("Nhap num=");
	scanf("%d",&num);
	
	int r;
	r= num%2;
	
	if(r==0){
		// dung thi lam gi
		printf("%d la so chan",num);
	}else{
		// sai thi lam gi
		printf("%d la so le",num);
	}
		
}
