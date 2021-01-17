#include <stdio.h>
#include <time.h>
int main(){
	
	int num;
	srand(time(NULL));
	num=rand()%100;
	printf("Random sayi: %d\n",num);
	if(num<10){
		printf("sayi tek basamakli");
	}
	else if(num<100){
		printf("sayi 2 basamakli");

	}
	else if(num<1000){
		printf("sayi 3 basamakli");

	}
	else if(num<10000){
		printf("sayi 4 basamakli");

	}
	
}
