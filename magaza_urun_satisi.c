#include <stdio.h>
#include <stdlib.h>
#define Personel_Sayisi 7
#define Urun_Sayisi 5

int main(int argc, char *argv[]) {
	
	int satis_miktari[Personel_Sayisi][Urun_Sayisi],max,i,j,urun,personel;
	
	printf("========================== Urun Miktarini Giriniz ==========================");
	printf("\n\n");
	for(i=0;i<Personel_Sayisi;i++)
	{
		for(j=0;j<Urun_Sayisi;j++)
		{
			printf("%d. personelin sattigi %d kodlu urun miktari \n",i+1,j+1);
			scanf("%d",&satis_miktari[i][j]);
		}
	}
	
	printf("========================== 1.Soru ==========================");
	printf("\n\n");
	int temp;
	for(i=0;i<Personel_Sayisi;i++)
	{
		temp=0;
		for(j=0;j<Urun_Sayisi;j++)
		{
			temp+=satis_miktari[i][j];
		}
		printf("%d.personelin yaptigi toplam satis= %d\n",i+1,temp);
	}
	printf("\n\n");
	printf("========================== 2.Soru ==========================");
	printf("\n\n");
	
	for(j=0;j<Urun_Sayisi;j++)
	{
		temp=0;
		for(i=0;i<Personel_Sayisi;i++)
		{
			temp+=satis_miktari[i][j];
		}
		printf("%d kodlu urunden %d adet satilmistir.\n",j+1,temp);
	}
	printf("\n\n");
	printf("========================== 3.Soru ==========================");
	printf("\n\n");
	temp=0;
	for(i=0;i<Personel_Sayisi;i++)
	{
		for(j=0;j<Urun_Sayisi;j++)
		{
			temp+=satis_miktari[i][j];
		}
	}
	printf("Toplam satis miktari %d dir.\n",temp);
	printf("\n\n");
	printf("========================== 4.Soru ==========================");
	printf("\n\n");
	
	for(j=0;j<Urun_Sayisi;j++)
	{
		temp=0;
		for(i=0;i<Personel_Sayisi;i++)
		{
			temp+=satis_miktari[i][j];
		}
		if(max<temp)
		{
			max=temp;
			urun=j+1;
		}
	}
	printf("En cok satilan %d kodlu urun = %d adet satildi ",urun,max);
	
	printf("\n\n");
	printf("========================== 5.Soru ==========================");
	printf("\n\n");
	max=0;
	for(i=0;i<Personel_Sayisi;i++)
	{ 
		temp=0;
		for(j=0;j<Urun_Sayisi;j++)
		{
			temp+=satis_miktari[i][j];
		}
		if(max<temp)
		{
			max=temp;
			personel=i+1;
		}
	}
	printf("En cok satis yapan %d. personel %d kadar satis yapmistir.",personel,max);
	printf("\n\n");
	printf("========================== 6.Soru ==========================");
	printf("\n\n");
	
	/*
	3ve4 kodlu urunlerin toplam satisini en fazla yapan personeli satis miktari ile bul.
	*/	
	max=0;
	temp=0;
	for(i=0;i<Personel_Sayisi;i++)
	{ 	
			temp=satis_miktari[i][2]+satis_miktari[i][3];
		
		if(max<temp)
		{
			max=temp;
			personel=i+1;
		}
	}
	printf("3ve4 kodlu urunlerin toplam satisini en fazla yapan %d. personel %d kadar satis yapmistir.",personel,max);
	
	
	return 0;
}
