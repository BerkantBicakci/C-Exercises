#include <stdio.h>

int main(){
    int N,i;
    float a;
    float counter=0;
    printf("Sayi giriniz: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        a=(float)1/(float)i;
        counter=counter+a;
    }
    printf("Toplami: %.3f", counter);
return 0;

}
