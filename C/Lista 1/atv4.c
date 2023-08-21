#include <stdio.h>
int main(){
  char nome[15];
  int vitoria , empate;
  int x, y, p;
  
  printf("Digite o nome do time:");
    scanf("%s",nome);
  
  printf("Digite o numero de vitorias:");
    scanf("%d",&vitoria);
  
  printf("Digite o numero de empates:");
    scanf("%d",&empate);
   x = vitoria * 3;
   y = empate * 1; 
   p = x + y;
  
  printf("Nome do time: %s\n", nome); 
  printf("total de pontos = %d\n", p);

 
 
 
 return 0;

}


