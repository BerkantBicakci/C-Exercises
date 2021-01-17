#include <stdio.h>
#include <string.h>
int main(){
	char n[100]="";
	char b[]="Girisken Bootcamp";
	
/*	printf("n dizisini gir.\n");
	gets(n);  
	*/
	printf("b dizisinin uzunlugu: %d\n",strlen(b));
	printf("b dizisinin uzunlugu: %d",sizeof(b));
	
	strcpy(n,b); //burda n'yi almadan kopyalýyor
	// strncpy(n,b,5); burda ilk 5 karakteri kopyalar
	puts(n);
	printf("n'nin uzunlugu: %d\n",strlen(n));
	if(strcmp(n,b)==0)
		printf("Iki dizi esit.");
	
	
}
