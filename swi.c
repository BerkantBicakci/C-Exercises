#include <stdio.h>
int main(){
	
	int a,b;
	char op;
	printf("Operator gir: \n");
	scanf("%c",&op);
	printf("2sayi gir: ");
	scanf("%d%d",&a,&b);
	
	switch(op){
		case '+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
				printf("%d-%d=%d",a,b,a-b);
				break;
		case '*':
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/':
			printf("%d/%d=%.2f",a,b,(float)a/(float)b);
			break;
		default:
			printf("Gecerli operator girmediniz.");
			break;
		
		}
	
	
	
}
