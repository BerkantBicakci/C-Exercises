#include <stdio.h>
#include <time.h>

int main(){
	
	int a;
	srand(time(NULL));
	a=rand()%10000;
	printf("%d",a);
}
