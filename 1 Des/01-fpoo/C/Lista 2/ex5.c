#include <stdio.h>
int main(){
	
	char nome[20];
	int preco,x,y; 
	printf("Digite o Nome do produto :");
		scanf("%s",&nome);
		 
	printf("Digite o valor do produto :");
		 scanf("%d",&preco);

	x = preco * 0.05 + preco;
	y = preco * 0.07 + preco;
	
	
	printf("Nome do Produto: %s\n",nome);
	
	if(preco >= 1000) 
		printf("Novo Preço: %d\n",x);
	
	else if (preco <1000)
	printf("Novo Preço: %d\n",y);
		
	

		 return 0;
	
}
