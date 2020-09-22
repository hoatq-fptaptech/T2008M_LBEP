#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("bat dau quet tang %d \n",i);
		if(i==5){
			continue;
		}
		printf("quet xong tang %d\n",i);
	}
}

