#include <stdio.h>
#include <iostream>
int main(){
	int x= 10;
	int *p;
	p = &x;
	std::cout << x;
	printf("\n Dia chi cua X: ");
	std::cout << p;
	printf("\n Gia tri cua x: %d",x);
	x++;
	printf("\n Gia tri cua x: %d",*p);
	(*p)++;
	printf("\n Gia tri cua x: %d",x);
	int arr[5]; // arr la 1 bien con tro dang luu dia chi cua arr[0]
	p = &arr[0];
	*(p) = 7;// arr[0] = 7;
	p++;// di sang nha arr[1];
	*(p)= 12; // arr[1] = 12
	printf("\n arr[0] = %d",arr[0]);
	printf("\n arr[1] = %d\n",arr[1]);
	*arr = 15; // arr[0] = 15;
	*(arr+1) = 6;// arr[1]=6;
	for(int i=0;i<5;i++){
		printf("arr[%d] = ",i);
		scanf("%d",arr+i);
	}
	for(int i=0;i<5;i++){
		printf("%5d",*(arr+i));
	}
}
