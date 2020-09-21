#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d:",i);
		scanf("%d",&ary[i]);
	}
	int S=0,count=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2 !=0){
			S+=ary[i];
			count++;
		}
	}
	if(count >0)
		printf("Trung binh cong cac so le: %f",(float)S/count);
	else 
		printf("Khong co so le nao ca");	
}
