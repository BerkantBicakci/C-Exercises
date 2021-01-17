#include <stdio.h>
 int main( ) {
   

int gecenler=0,kalanlar=0,sonuc,ogrenci=1;
	

	while(ogrenci<=10){
		
	printf("Sonucu gir (1->gecti, 0->kaldi):  ");
	scanf("%d",&sonuc);
	
	if(sonuc==1){
		gecenler++;
		
	}
	else
		kalanlar++;
		
	ogrenci++;
		
		
}
	printf("Gecenlerin sayisi: %d\n",gecenler);
	printf("Kalanlarin sayisi: %d\n",kalanlar);
	
	
	if(gecenler>5){
		printf("Sinav basarili");
	}
	else if(gecenler==5){
		printf("Sonuc esit");
	}
	
	else{
		printf("Sinav tekrarlansin");
	
}




}
