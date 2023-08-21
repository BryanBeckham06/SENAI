#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Calculadora IMC\n");
	
	char nome[20];
	float peso, altura, imc;
	printf("Digite o nome  do paciente:");
		scanf("%s",&nome);
	printf("Digite seu peso em kg e altura em metros \n ultilizando pontot como decimal e separado por espaço :");
	 scanf("%f %f",&peso, &altura);	
	
	
	
	return 0;
}
