#include <stdio.h>
int main(){
	 
	 int dizi[10],toplam,i;
	 float ort;
	 for(i=0;i<10;i++){
	 	printf("%d.deger: ",i+1);
	 	scanf("%d",&dizi[i]);
	 } 
	 for(i=0;i<10;i++){
	 	toplam+=dizi[i];
	 }
	 ort=(float)toplam/10;
	 printf("%.3f",ort);
}

