void SapXepMang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
void SapXepMang2(int *arr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

bool TimKiem(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(x==arr[i])
			return true;
	}
	return false;
}

void NhapGTMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void InMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
