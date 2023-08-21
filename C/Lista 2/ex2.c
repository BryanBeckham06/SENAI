#include <stdio.h>
int main(){
	

  int salario, salario1, salario2, filho,x;
   printf("Digite o salario:");
   		scanf("%d",&salario);
   	
	   printf("Digite a quantidade de filhos:");
   		scanf("%d",&filho);
   	
	x = 45;
	salario1 = filho * x;
 	salario2 = salario + salario1;
	 
	 if (salario <2000)
	printf("Novo Salario = %d\n",salario2);
	else if (salario >2000)
	printf("Salario = %d\n",salario);		
	
	
	
	
	
	return 0;
	
}
