#include <stdio.h>
typedef struct SinhVien{
	char TenSV[100];
	int TuoiSV;
	int DiemThi;
} SV;
int main(){
	SV x;
	printf("Nhap ten sinh vien:");
	scanf("%s",x.TenSV);
	printf("Nhap tuoi sinh vien:");
	scanf("%d",&x.TuoiSV);
	printf("Nhap diem sinh vien:");
	scanf("%d",&x.DiemThi);
	
	printf("Thong tin sinh vien:\n");
	printf("Ten: %s\n",x.TenSV);
	printf("Tuoi: %d\n",x.TuoiSV);
	printf("Diem thi: %d\n",x.DiemThi);
	
	SV t2008m[25];// 1 mang 25 sinh vien
	for(int i=0;i<25;i++){
		printf("Nhap ten sinh vien:");
		scanf("%s",t2008m[i].TenSV);
		printf("Nhap tuoi sinh vien:");
		scanf("%d",&t2008m[i].TuoiSV);
		printf("Nhap diem sinh vien:");
		scanf("%d",&t2008m[i].DiemThi);
	}
}
