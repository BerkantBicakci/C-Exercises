#include <stdio.h>

int main()
{
int i,N;
printf("N sayisini giriniz:");

scanf("%d", &N);

for(i=1;i<=N;i++)
{
if(i%3==0 && i%5==0)
printf("%d\n",i);
  }
  
}

