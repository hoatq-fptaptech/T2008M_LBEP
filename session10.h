void NhapMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&arr[i]);
	}
}
void InMang(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}

void SapXepMang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}
