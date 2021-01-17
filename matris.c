 #include <stdio.h>
 #include <string.h>
 int main(){
 		
 		int dizi[5][5];
 		int i,j;
 		for(i=0;i<5;i++){
 			for(j=0;j<5;j++){
 				if(i==j)
 				{
 					dizi[i][j]=1;
				 }
				 else{
				 	dizi[i][j]=0;
				 }
				 
			 }
			 
		 }
	     for(i=0;i<5;i++){
	     	for(j=0;j<5;j++){
	     		printf("%d",dizi[i][j]);
			 }
			 printf("\n");
		 }
 		
 		
 	
 }
