#include <stdio.h>
int main()
{
	int deger;
    int counter=0;
    int temp=1,i;
    printf("Sayi giriniz\n");
    scanf("%d", &deger);
    for(i=1;i<=deger;i++){
        temp=temp*i;
    }
    for(i=0;i<=deger;i++){
        counter=counter+i;
    }
    printf("Carpimi: %d\n toplami: %d",temp,counter);
    return 0;
}
