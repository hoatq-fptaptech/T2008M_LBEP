#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=1;i<n;i++){		
		int x = i;//1 2 ... 12 13
		// tim nghich dao cua x
		int x2=0;
		while(x!=0){
			x2 = x2*10 + x%10; //21
			x/=10;// 1 0
		}
		printf("Nghich dao: %d\n",x2);//1 2
	}
}
