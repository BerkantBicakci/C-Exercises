#include <stdio.h>
#include <stdlib.h>


int main() {
	int bosluk, yildiz,i;
	for(i=1;i<=5;i++) //satir sayisi
	{
		for(yildiz=i;yildiz<=5;yildiz++)
		{
			printf("\t*");
		}
		printf("\n");
		for(bosluk=0;bosluk<=i-1;bosluk++)
		{
			printf("\t.");
		}
		
		}
	
/*
Giris: 5
* * * * * -- 5 yildiz 0 bosluk
. * * * * -- 4 yildiz 1 bosluk
. . * * * -- 3 yildiz 2 bosluk
. . . * * -- 2 yildiz 3 bosluk
. . . . * -- 1 yildiz 4 bosluk
*/
	
	
	
	
	return 0;
}

