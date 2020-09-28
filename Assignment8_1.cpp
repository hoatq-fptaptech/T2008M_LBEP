#include <stdio.h>

bool KTSNT(int x){
	if(x<2) return false;
	if(x<=3) return true;
	for(int i=2;i<=x/2;i++){
		if(x%i==0)
			return false;
	}
	return true;
}

int SNTTiepTheo(int n){
	for(int i=n+1;true;i++){
		// kiem tra i co phai SNT
		if(KTSNT(i)){
			return i;
		}
	}
}

int main(){
	
}
