#include <stdio.h>
int main(){
	
	char salario[5][20],nome[5][20],reajuste[5][20];
	float indice;
	int n, i;
	
	n = 2;
	
	for(i = 0; i < n; i++){
	
	
	printf("\nDigite o nome da %d pessoa:", i + 1 );
	scanf("%s", &nome[i]);
	
	printf("Digite o salario da %d pessoa: R$", i + 1 );
	scanf("%s", &salario[i]);
	
	}
	
	printf("Digite a porcentagem do indece : ");
	scanf("%f", &indice);
	
	for(i = 0; i < n; i++){
		
		reajuste[i] = salario[i] * indice;
		
		printf("Salario: %s", reajuste[i]);
	}
	
	return 0;
}
