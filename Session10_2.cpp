#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	p = (int *)malloc(5*sizeof(int)); // tuong duong int p[5]
	for(int i=0;i<5;i++){
		printf("nhap gt %d = ",i);
		scanf("%d",p+i);
	}
	p = (int *)realloc(p,10*sizeof(int)); // cap phat them o nho
	for(int i=5;i<10;i++){
		printf("nhap gt %d = ",i);
		scanf("%d",p+i);
	}
	
	for(int i=0;i<10;i++){
		printf("%5d",*(p+i)); 
	}
	free(p);// giai phong o nho
	// neu ko can dung p nua
}
