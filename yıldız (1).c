#include <stdio.h>
int main(){

int N,i,j,k;
    printf("sayi giriniz\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        
        for(j=1;j<N-i;j++)
        {
           printf(" ");
    }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
   
     printf("\n");
 }
}
