#include <stdio.h>
int main(){
	
	int a,b;
	float bolum;
	printf("2 sayi gir: ");
	scanf("%d%d",&a,&b);
	printf("Toplamlari: %d\n",a+b);
	printf("Farklari: %d\n",a-b);
	printf("Carpimlari: %d\n",a*b);
	bolum=(float)a/(float)b;
	printf("Bolumleri: %.2f\n",bolum);
	printf("Ilk sayinin digerine göre modu: %d",a%b);
	
	
}
