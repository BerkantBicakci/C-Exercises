
#include <stdio.h>
#include <math.h>

int main() {
    int N,i,j;
    float a,counter1=0,counter2=0;
    int temp;
    printf("Sayi giriniz: ");
    scanf("%d", &N);
    for( i=1;i<=N;i++){
        if(i%2==0){
            temp=1;
            for(j=1;j<=i;j++){
                temp=temp*j;
            }
           a=(float)temp/pow(i,2);
            counter1=counter1-a;
        }
        else if(i%2==1){
            temp=1;
            for(j=1;j<=i;j++){
                temp=temp*j;
            }
           a=(float)temp/pow(i,2);
            counter2=counter2+a;
        }
    }
    printf("%.3f", counter1+counter2);
    return 0;
}
