#include <stdio.h>
int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(ary[j]>ary[j+1]){
				int x = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = x;
			} 
		}
	}
	
	printf("mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",ary[i]);
	}
}
