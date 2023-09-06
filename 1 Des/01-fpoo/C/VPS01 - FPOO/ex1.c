#include <stdio.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "Portuguese");	
	int a,b,c;
	
	printf("Insira dois numeros separados por espaços:");
	scanf("%d %d",&a,&b);
	
	c = a + b;
	printf("\n");
	printf("A soma dos valores é igual a: %d",c);
	
	
	
	
	
	
	return 0;
}
