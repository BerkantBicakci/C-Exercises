#include <stdio.h>

int main(){
	
	// 1*1+2*2+...+50*50
	
	int k,toplam=0;
	while(k<=50){
		toplam+=k*k;
		k++;
	}
	printf("Toplamlari: %d",toplam);
	
	
	
}
