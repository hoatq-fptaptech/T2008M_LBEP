#include <stdio.h>
int main(){
	int d,m;
	printf("Nhap ngay:");
	scanf("%d",&d);
	printf("Nhap thang:");
	scanf("%d",&m);
	if(m>12){
		printf("Ban da nhap nham thang, phai tu 1 - 12");		
	}else{
		if(m<1){
			printf("Ban da nhap nham thang, phai tu 1 - 12");
		}else{
			if(d>31){
				printf("Ban da nhap nham ngay, phai tu 1 - 31");
			}else{
				if(d<1){
					printf("Ban da nhap nham ngay, phai tu 1 - 31");
				}else{
					if(m==1){
						printf("Day la ngay thu: %d trong nam ",d);
						if(d%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",d%7+1);
						}
					}
					if(m==2){
						if(d>28){
							printf("thang 2 chi co 28 ngay");
						}else{
							printf("Day la ngay thu: %d trong nam ",d+31);
							if((d+31)%7==0){
								printf("va la chu nhat");
							}else{
								printf("va la thu: %d",(d+31)%7+1);
							}
						}
					}
					if(m==3){
						printf("Day la ngay thu: %d trong nam ",d+31+28);
						if((d+31+28)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28)%7+1);
						}
					}
					if(m==4){
						if(d>30){
							printf("thang chi co toi da 30 ngay");
						}else{
							printf("Day la ngay thu: %d trong nam ",d+31+28+31);
							if((d+31+28+31)%7==0){
								printf("va la chu nhat");
							}else{
								printf("va la thu: %d",(d+31+28+31)%7+1);
							}
						}
						
					}
					if(m==5){
						printf("Day la ngay thu: %d trong nam ",d+31+28+31+30);
						if((d+31+28+31+30)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28+31+30)%7+1);
						}
					}
					if(m==6){
						if(d>30){
							printf("thang chi co toi da 30 ngay");
						}else{
							printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31);
							if((d+31+28+31+30+31)%7==0){
								printf("va la chu nhat");
							}else{
								printf("va la thu: %d",(d+31+28+31+30+31)%7+1);
							}
						}
					}
					if(m==7){
						printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30);
						if((d+31+28+31+30+31+30)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28+31+30+31+30)%7+1);
						}
					}
					if(m==8){
						printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30+31);
						if((d+31+28+31+30+31+30+31)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28+31+30+31+30+31)%7+1);
						}
					}
					if(m==9){
						if(d>30){
							printf("thang chi co toi da 30 ngay");
						}else{
							printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30+31+31);
							if((d+31+28+31+30+31+30+31+31)%7==0){
								printf("va la chu nhat");
							}else{
								printf("va la thu: %d",(d+31+28+31+30+31+30+31+31)%7+1);
							}
						}
					}
					if(m==10){
						printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30+31+31+30);
						if((d+31+28+31+30+31+30+31+31+30)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28+31+30+31+30+31+31+30)%7+1);
						}
					}
					if(m==11){
						if(d>30){
							printf("thang chi co toi da 30 ngay");
						}else{
							printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30+31+31+30+31);
							if((d+31+28+31+30+31+30+31+31+30+31)%7==0){
								printf("va la chu nhat");
							}else{
								printf("va la thu: %d",(d+31+28+31+30+31+30+31+31+30+31)%7+1);
							}
						}
					}
					if(m==12){
						printf("Day la ngay thu: %d trong nam ",d+31+28+31+30+31+30+31+31+30+31+30);
						if((d+31+28+31+30+31+30+31+31+30+31+30)%7==0){
							printf("va la chu nhat");
						}else{
							printf("va la thu: %d",(d+31+28+31+30+31+30+31+31+30+31+30)%7+1);
						}
					}
				}
			}
		}
	}
}

