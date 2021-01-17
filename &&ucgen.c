#include <stdio.h>
int main(){
	
	int a,b,c;
	printf("Ucgenin kenarlarini gir.\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b+c && a>abs(b-c)){
		if(b<a+c && b>abs(a-c)){
			if(c<a+b && c>abs(a-b)){
				printf("Ucgen olusturur.");
			}
			else
				printf("Ucgen olusturmaz.");
		}
			else
				printf("Ucgen olusturmaz.");
	}
		else
				printf("Ucgen olusturmaz.");
}
