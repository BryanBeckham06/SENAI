#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "");
	int n, fatorial;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	for(fatorial = 1; n > 1; n = n - 1){
			fatorial = fatorial * n;
		}		
	
	printf("O falorial é: %d\n",n, fatorial);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
