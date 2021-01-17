#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	float x,seri;
	printf("Pozitif sayi gir: ");
	scanf("%d",&n);
	printf("X degeri: ");
	scanf("%f",&x);
	for(i=1;i<=2*n-1;i+=2){
		seri+=i/pow(x,i+1);
	}

	printf("Seri: %.3f",seri);
}  


// 1/x^2+3/x^4+5/x^6
