#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("s1 = ");
	scanf("%s",s1);
	printf("s2 = ");
	scanf("%s",s2);
	
	printf("sau khi nhap: s1= %s\n",s1);
	printf("sau khi nhap: s2= %s\n",s2);
	
	strcat(s1,s2);// s1 = s1+s2;
	printf("sau khi nhap: s1= %s\n",s1);
	printf("sau khi nhap: s2= %s\n",s2);
	
	strcat(s2,s1);// s2 = s2+s1;

	printf("sau khi nhap: s1= %s\n",s1);
	printf("sau khi nhap: s2= %s\n",s2);
	
	strcpy(s1,s2);//tuong duong s1=s2;
	if(strcmp(s1,s2)>0){
		printf("s2 dung truoc s1 trong thu tu alphabe");
	}else if(strcmp(s1,s2)<0){
		printf("s1 dung truoc s2 trong thu tu alphabe");
	}else{
		printf("2 chuoi giong nhau");
	}
	
	 int x = strchr(s1,'l') - s1;// vi tri cua ky tu l trong s1
	 printf("\nvi tri cua ky tu l: %d",x); 
	 int len = strlen(s1);
	 printf("\n do dai chuoi s1: %d",len);
}
