#include <stdio.h>
int main(){
	int birinci=0,ikinci=1,i,n,temp;
	printf("Adim sayisi: ");
	scanf("%d",&n);
	
	printf("%3d%3d",birinci,ikinci);
	
	for(i=0;i<n-2;i++){
		temp=ikinci;
		ikinci+=birinci;
		birinci=temp;
		printf("%3d",ikinci);
	}
}
