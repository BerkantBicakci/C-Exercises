#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
	
	int r;
	 float cevre,alan;
	printf("Dairenin yaricapi: ");
	scanf("%d",&r);
	cevre=2*PI*r;
	printf("Dairenin cevresi: %f",cevre);
	alan=PI*r*r;     //veya pow(r,2)
	printf("Dairenin alani: %f",alan);


}
