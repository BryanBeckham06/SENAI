#include <stdio.h>
 int main(){
 	
 	float salario, reajuste;
 	
 	printf("Digite o salario Atual:");
 		scanf("%f",&salario);
 	
 	 if(salario < 1750) reajuste = salario * 0.15;
		else if(salario > 1500) reajuste = salario * 0.15;
	
	else if(salario <= 1750) reajuste = salario * 0.12;
		else if(salario < 2000) reajuste = salario * 0.12;
	
	else if(salario <= 2000) reajuste = salario * 0.09;
		else if(salario < 3000) reajuste = salario * 0.09;
	
	else if(salario >= 3000) reajuste = salario * 0.06;
	
 	printf("Novo Salario = %.2f\n",reajuste + salario);
 	
	 
	 return 0;
 }
