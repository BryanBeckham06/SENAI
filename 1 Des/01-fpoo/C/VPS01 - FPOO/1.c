#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	char nome[5][20];
	int nota[5], i, media[5];
	
	for(i = 0; i < 5; i++){
		printf("\nDigite o nome do %d aluno: ", i+1);
		scanf("%s", &nome[i]);
		
		printf("Digite a 1 nota do aluno %s: ", nome[i]);
		scanf("%d", &nota[i]);	
	
		printf("Digite a 2 nota do aluno %s: ", nome[i]);
		scanf("%d", &nota[i + 1]);	
	
		
		media[i] = (nota[i] + nota[i + 1]) / 2;
	}
	
	for(i = 0; i < 5; i++){
		if(media[i] >= 5){
			printf("\nNome: %s \nMedia: %d \nAprovado!\n", nome[i], media[i]);
		}else{
			printf("\nNome: %s \nMedia: %d \nReprovado!\n", nome[i], media[i]);	
		}
	}
	
	return 0;
}
