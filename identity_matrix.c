#include <stdio.h>
 #include <string.h>
 int main(){
 		int rows,column;
 		printf("Enter the number of rows of the matrix\n");
 		scanf("%d",&rows);
 		printf("Enter the number of column of the matrix\n");
 		scanf("%d",&column);
		 int dizi[rows][column];
 		 int i,j;
 		for(i=0;i<rows;i++){
 			for(j=0;j<column;j++){
 				if(i==j)
 				{
 					dizi[i][j]=1;
				 }
				 else{
				 	dizi[i][j]=0;
				 }
				 
			 }
			 
		 }
	     for(i=0;i<rows;i++){
	     	for(j=0;j<column;j++){
	     		printf("%3d",dizi[i][j]);
			 }
			 printf("\n");
		 }
 		
 		
 	
 }
