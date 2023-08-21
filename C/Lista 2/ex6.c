#include <stdio.h>
int main(){
	
	
	int numero, numeroMaior, numeroMenor;
 	int i;

 	printf("Digite o 1o numero inteiro: ");
 		scanf("%i", &numero);

 	numeroMaior = numero;
 	numeroMenor = numero;

 	for(i=1; i<6; i++)
 	{
 	printf("\nDigite o %do numero inteiro: ",i+1);
 		scanf("%i", &numero);

 	if(numero>numeroMaior)
 		numeroMaior=numero;
 
 	else
 	if(numero<numeroMenor)
 		numeroMenor=numero;
 }
	printf("\nO menor numero e: %d", numeroMenor);
 	printf("\nO maior numero e: %d", numeroMaior); 

return 0;
}
