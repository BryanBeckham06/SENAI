#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("Digite o Numero de Alunos: ");
	scanf("%d", &n);
	
	char nomes [n][20];
	int notas[n], nota1[n];
	float media[n];
	
	
   
	for(i = 0; i < n; i++){
		printf("\nDigite o nome do %dª aluno: ", i + 1);
		scanf("%s",&nomes[i]);
		printf("Digite a nota 1 do %dª aluno: ", i + 1);
		scanf("%d",&notas[i]);
	printf("Digite a nota 2 do %dª aluno: ", i + 1);
		scanf("%d",&nota1[i]);
	
	}

	media[n] = notas[n] + nota1[n];
	for(i = 0; i < n; i++){
		
		
		
		if(media[n] >= 10){
			printf("Nome: %s\nMedia: %f\n = Aprovado\n", nomes[i], media[n]);
		}
		else {
			printf("\n");
			printf("Nome: %s\nMedia: %f\n = Reprovado\n", nomes[i], media[n]);
		}
		
	
		
	
	}
	
	return 0;
}
