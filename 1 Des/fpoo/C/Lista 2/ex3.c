#include <stdio.h>
int main(){
		
		
   float salario, inss; 
		printf("Digite seu salário:");
			scanf("%f",&salario); 
	
	if(salario < 1320.01) inss = salario * 0.075;
	else if(salario < 2571.30) inss = salario * 0.09;
	else if(salario < 3856.95) inss = salario * 0.12;
	else if(salario < 7507.29) inss = salario * 0.14;
	else inss = 1051.02;
	
	printf("O desconto de INSS = %.2f\n",inss);
	printf("O salário líquido será de = %.2f\n",salario - inss);
	

	
	return 0;
}
