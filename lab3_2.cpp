#include <stdio.h>
int main(){
	float S=4000,ls = 0.08;
	S += S*ls;
	S += S*ls;
	S += S*ls;
	S += S*ls;
	printf("So tien nhan duoc: %f",S);
}
