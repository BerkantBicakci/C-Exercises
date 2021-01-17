#include <stdio.h>
int main(){
	 
	 //negatif girince çýk çift sayýlarý  topla
	 
	int a=1,even=0;
	while(a>0){
		printf("Sayilar: ");
		scanf("%d",&a);
		if(a%2==0){
			even+=a;
		}
	}
	printf("even: %d",even);
}
