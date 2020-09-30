#include <stdio.h>
#include <stdlib.h>
#include "session10.h"
int main(){
	int *p,n;
	printf("Nhap n= ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	NhapMang(p,n);
	SapXepMang(p,n);
	p = (int *)realloc(p,2*n*sizeof(int));
	printf("Nhap tiep:\n");
	for(int i=n;i<2*n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&p[i]);
	}
	SapXepMang(p,2*n);
	InMang(p,2*n);
}

