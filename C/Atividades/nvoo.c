#include <stdio.h>
int main(){
	
	float velocidade, distancia, tempo;
	
 	 
	  printf("Digite a distancia percorrida pelo aviao em km:");
 	   scanf("%f", &distancia);
 	
	 velocidade = 900;
	 tempo = distancia / velocidade;
 	 
 	printf("o tempo em horas: = %f\n", tempo);
 	
	
	
	return 0;
}
