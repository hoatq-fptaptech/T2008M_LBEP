#include <stdio.h>
int main(){
	int arr[10] = {1,3,5,7,8,9,11,15,19,22};
	int search = 15;
	int low = 0,hi =9;
	bool flag = false;
	while(low <=hi){
		int mid = (low+hi)/2;
		if(arr[mid]== search){
			printf("%d nam trong day so",search);
			flag =true;
			break;
		}else if(search < arr[mid]){
			hi = mid-1;
		}else{
			low = mid+1;
		}
	}
	if(!flag)
		printf("%d ko nam trong day so",search);
}
