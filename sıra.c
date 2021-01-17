#include <stdio.h>
#include <ctype.h>
int main(){
	
	char x;
	printf("Harf gir: ");
	scanf("%c",&x);
	if(isalpha(x)){
		if(islower(x)){
			printf("Girdiginiz sayinin alfabedeki yeri %d",x-96);
		}
		else{
			printf("Girdiginiz sayinin alfabedeki yeri %d",x-64);
		}
	} 
}
