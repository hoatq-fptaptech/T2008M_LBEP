#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		int gt=1;
		// tinh i!;
		for(int j=1;j<=i;j++){
			gt*=j;
		}
		printf("%d! = %d\n",i,gt);
	}
}
