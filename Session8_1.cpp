#include <stdio.h>
#include "session8.h"
int main(){
	int x = 5;
	int x_gt = GiaiThua(x);// 1 so nguyen
	printf("%d! = %d\n",x,x_gt);
	InRaTong2So(5,3);
	printf("Trung binh cong cua 2 3 5 = %f\n",TBC(2,3,5));
	printf("So fibonacci thu 8: %d",Fibonaci(8));
}
