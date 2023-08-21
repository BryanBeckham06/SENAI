#include <stdio.h>
int main(){
  char nome [20];
  int salario, reajuste, salario1, salario2;
		
		printf("Digite o nome:");
			scanf("%s",&nome);
		
		printf("Digite o salario em R$:");
			scanf("%d",&salario);
		
		printf("Digite o ajuste salarial em porcentagem :");
			scanf("%d",&reajuste);
	
	salario1 = reajuste * salario/100;
	 
	salario2 = salario1 + salario;
	
	 printf("Nome : %s\n",&nome);
	 printf("O valor do novo Salario = %d\n",salario2);
   return 0;		
}
