#include <stdio.h>

int main() {
    int x,i;
    printf("sayi giriniz\n");
    scanf("%d",&x);                        
    int a,max,min;
    scanf("%d",&max);                 //   1 2 3 4 
    min=max;
    for( i=0;i<x-1;i++){
        scanf("%d",&a);
        if(min>a){
            min=a;
        }
        if(max<a){
            max=a;
        }
    }
    
    printf("en kucuk: %d\n  en buyuk: %d", min,max);
    return 0;
}
