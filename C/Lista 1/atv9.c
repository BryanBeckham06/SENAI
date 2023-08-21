#include <stdio.h> 
 int main(){
 	 
	  char nome[20];
	  
	  int preco, x, y;
 	  
	   printf("Digite o nome do produto:");
         scanf("%s",&nome);
      
	  printf("Digite o valor do produto:");
         scanf("%d",&preco);

     x = preco * 5 /100;
     y = x + preco;
	 printf("Nome do produto: %s\n", nome);
	 printf("valor do produto + adicional: %d\n", y);
	 
	 
	 
	 return 0;
 	
 }
