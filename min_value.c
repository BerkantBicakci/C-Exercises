#include <stdio.h>
#include <stdlib.h>


int main() {


	int i,min,value;
	printf("How many value do you want to enter?\n");
	scanf("%d",&value);
	int array[value];
	for(i=0;i<value;i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}

	min=array[0];
	for(i=0;i<value;i++)
	{
		if(min>array[i])
		{
			min=array[i];
		}
	}
	printf("The minimum value of the array is %d",min);	
	return 0;
}
