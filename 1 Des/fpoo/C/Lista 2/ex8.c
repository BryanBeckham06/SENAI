#include <stdio.h>
int main(){
	
	
	int numero, numeroMaior, numeroMenor;
 	int i;

 	printf("Digite 1 numero inteiro: ");
 		scanf("%i", &numero);

 	numeroMaior = numero;
 	numeroMenor = numero;

 	for(i=1; i<2; i++)
 	{
 	printf("\nDigite %d numero inteiro: ",i+1);
 			scanf("%i", &numero);

 	if(numero>numeroMaior)
 		numeroMaior=numero;
 	else
 	if(numero<numeroMenor)
 		numeroMenor=numero;
 }
	printf("\nO Maior : %d\n", numeroMaior);
 	printf("\nO Menor : %d\n", numeroMenor);
 	 
	return 0;
}
