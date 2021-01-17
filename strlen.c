#include <stdio.h>
#include <string.h>
int main() {

	char cumle[100];
	int i = 0,a=0;
	printf("Cumle gir: ");
	gets(cumle);
	while (cumle[i]) {
		i++;
		if(cumle[i]==32){
			a++;
		}
	}
	printf("%d", i-a);
		
	/*	printf("Boyu: %d",strlen(cumle));
		printf("Boyu: %d",sizeof(cumle));
	*/
	
}
