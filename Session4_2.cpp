#include <stdio.h>
int main(){
	float S=4000,ls=0.08;
	float n;
	printf("Nhap so tien muon nhan:");
	scanf("%f",&n);
	
//	for(int i=0;i<n;i++){
//		S += S*ls;
//	}
	
//	int count =0 ;
//	while(count<n){
//		S += S*ls;
//		count++;
//	}

	int count=0;
	for( ;S<n; ){
		S += S*ls;
		count++;
	}
	
	printf("So tien sau %d nam thu duoc: %f",count,S);
}
