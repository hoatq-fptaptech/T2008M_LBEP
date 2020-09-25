int Fibonaci(int n){
	if(n<=0)
		return 0;
	if(n<3)
		return 1;
	int x1=0,x2=1,x3=1;
	for(int i=3;i<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}		
	return x3;
}

int GiaiThua(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	return s;
}

void InRaTong2So(int a,int b){
	int c = a+b;
	printf("tong: %d\n",c);
	return ;
}
float TBC(int a,int b,int c){
	return (float)(a+b+c)/3;
}
