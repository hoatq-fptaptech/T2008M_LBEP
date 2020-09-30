#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct SinhVien{
	char TenSV[100];
	int TuoiSV;
	int DiemThi;
} SV;
typedef struct LopHoc{
	char TenLop[100];
	char PhongHoc[20];
	int SoHS;
	SV LopTruong;
} LopHoc;

void SapXepSinhVienTheoTen(SV arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arr[j].TenSV,arr[j+1].TenSV)>0){
				SV tmp;
				memcpy(&tmp,&arr[j],sizeof(SV));
				memcpy(&arr[j],&arr[j+1],sizeof(SV));
				memcpy(&arr[j+1],&tmp,sizeof(SV));
			}
		}
	}
}

void SapXepSinhVienTheoDiemThi(SV arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j].TenSV > arr[j+1].TenSV){
				SV tmp;
				memcpy(&tmp,&arr[j],sizeof(SV));
				memcpy(&arr[j],&arr[j+1],sizeof(SV));
				memcpy(&arr[j+1],&tmp,sizeof(SV));
			}
		}
	}
}

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
		// t2008m[i].DiemThi  <=> (t2008m+i)->DiemThi
	}
	
	LopHoc *arh;
	arh = (LopHoc *)malloc(10*sizeof(LopHoc));
	for(int i=0;i<10;i++){
		printf("Nhap ten lop: ");
		scanf("%s",(arh+i)->TenLop);
		printf("Nhap so luong hoc sinh: ");
		scanf("%d", &((arh+i)->SoHS));
	}
}
