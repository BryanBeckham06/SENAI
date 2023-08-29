#include <stdio.h>
#include <locale.h>
int main(){
  setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("digite o numero de doadores: ");
	scanf("%d", &n);
	
	char nomes [n][20],sexo [n][2];
	int idade [n];
	int dias [n];
	
   
	for(i = 0; i < n; i++){
		printf("\nDigite o nome do %dª doador: ", i + 1);
		scanf("%s",&nomes[i]);
		printf("Digite a idade do %dª doador: ", i + 1);
		scanf("%d",&idade[i]);
		printf("Digite o sexo do %dª doador (Masculino ou Feminino): ", i + 1);
		scanf("%s",&sexo[i]);
		printf("Digite quantos dias desde a ultima doacao do %dª doador:	", i + 1);
		scanf("%d",&   dias[i]);
	}
	
	
	for(i = 0; i < n; i++){
		if(sexo[i] == "m"&& dias[i] >= 60){
			printf("Nome: %s\nIdade: %d\nSexo: %s\nDias: %d\n = Apto\n", nomes[i], idade[i], sexo[i], dias[i]);
		}
		else {
			printf("\n");
			printf("Nome: %s\nIdade: %d\nSexo: %s\nDias: %d\n = Inapto\n", nomes[i], idade[i], sexo[i], dias[i]);
		}
		
	
		
	
	}
	
	return 0;
}
