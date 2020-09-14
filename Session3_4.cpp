#include <stdio.h>
int main(){
	int d,m;
	printf("Nhap ngay:");
	scanf("%d",&d);
	printf("Nhap thang:");
	scanf("%d",&m);
	
	switch(m){
		case 1: {
			printf("day la ngay %d",d);
			printf("thu: %d",d%7+1)
			break;
		}
		case 2: printf("day la ngay %d",d+31);break;
		case 3: printf("day la ngay %d",d+31+28);break;
		case 4: printf("day la ngay %d",d+31+28+31);break;
		case 5: printf("day la ngay %d",d+31+28+31+30);break;
		case 6: printf("day la ngay %d",d+31+28+31+30+31);break;
		case 7: printf("day la ngay %d",d+31+28+31+30+31+30);break;
		case 8: printf("day la ngay %d",d+31+28+31+30+31+30+31);break;
		case 9: printf("day la ngay %d",d+31+28+31+30+31+30+31+31);break;
		case 10: printf("day la ngay %d",d+31+28+31+30+31+30+31+31+30);break;
		case 11: printf("day la ngay %d",d+31+28+31+30+31+30+31+31+30+31);break;
		case 12: printf("day la ngay %d",d+31+28+31+30+31+30+31+31+30+31+30);break;
		default: printf("Thang phai tu 1 - 12");
	}
}
