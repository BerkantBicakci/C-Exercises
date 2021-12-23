#include <stdio.h>
#include <stdlib.h>

void loop(int row)
{
int j,i,star,space;
	
	star=1;
	space=row-1;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<space;j++)
		{
			printf("\t.");
		}
		for(j=0;j<star;j++)
		{
			printf("\t*");
		}
		printf("\n");
		space--;
		star++;
	}
	
}


int main() {
	
	int rows;
	printf("Rows: ");
	scanf("%d",&rows);
	
	loop(rows);
	
	
	
	return 0;
}
/*
rows:5

. . . . * --> 4 space 1 star
. . . * * --> 3 space 2 star
. . * * * --> 2 space 3 star
. * * * * --> 1 space 4 star
* * * * * --> 0 space 5 star
*/
