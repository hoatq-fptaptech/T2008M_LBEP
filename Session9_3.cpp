#include <stdio.h>
#include <string.h>
void LamGiDoVoiMangChuoi(char ars[][20],int n){
	// lam gi do
}

int main(){
	char s[20];// 1 chuoi
	printf("s = ");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97&&s[i]<=122){
			s[i] -=32;
		}
	}
	printf("Sau khi chuyen hoa: %s\n",s);
	char ars[5][20]; 
	for(int i=0;i<5;i++){
		printf("Nhap chuoi thu %d:",i);
		scanf("%s",ars[i]);// nhap chuoi thu i;
	}
	printf("Danh sach cac chuoi vua nhap:\n");
	for(int i=0;i<5;i++){
		printf("%s \n",ars[i]);
	}
}
