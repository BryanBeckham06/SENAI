#include <stdio.h>
int main(){
	char nome[15];
	float eleitores,votos, porcentagem;
	
	printf("Digite o nome da cidade:");
		scanf("%s",&nome);
	printf("Digite o numero de eleitores:");
		scanf("%f",&eleitores);
	printf("Digite o numero de votos apurados na ultima eleicao:");
		scanf("%f",&votos);
		
	porcentagem = votos/eleitores *100;
	
	printf("Cidade: %s\n",nome);
	printf("Porcentagem de Votos Apurados: %.2f\n",porcentagem);
	
	
	return 0;
}
