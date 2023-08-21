#include <stdio.h>
int main(){
   int velocidade;
   int distancia;
   printf("Digite a velocidade em km/h: ");
   scanf("%d",&velocidade);
   printf("Digite a distancia em km: ");
   scanf("%d",&distancia);
   int tempo = distancia / velocidade;
   printf("o tempo em horas e: %d",tempo);
   return 0;		
}
   
