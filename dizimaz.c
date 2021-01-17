#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,i;
    printf("sayi giriniz\n");
    scanf("%d",&x);
  int dizi[x];
    for(i=0;i<x;i++){
        scanf("%d",&dizi[i]);
    }
    int min=dizi[0];
    int max=dizi[0];
    for(i=0;i<x;i++){
        if(min>dizi[i]){
            min=dizi[i];
        }
        if(max<dizi[i]){
            max=dizi[i];
        }
    }
    printf("En kucuk: %d\nEn buyuk: %d", min,max);
    return 0;
}
