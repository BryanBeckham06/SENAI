#include <stdio.h>
int main(){
	
   int nota1 , nota2 , nota3, media;
   float aulas, frequencia, presencas;
    printf("Digite as notas separadas por espaços:");
     scanf("%d %d %d",&nota1, &nota2, &nota3);
    printf("Digite o total de aulas dadas:");  
	 scanf("%d",&aulas);
    printf("Digite o total de presencas:");   
	 scanf("%d",&presencas);
     
  media = (nota1 + nota2 + nota3 / 3);
  frequencia = presencas / aulas;
  
  printf("Media = %d\n",media);
  printf("Media = %.2f\t ou %.0f%%\n", frequencia, frequencia * 100);
  
  if(media >= 50 && frequencia >= 0.75)
    printf("Aprovado");
else
    printf("Reprovado");
  
  
  
	return 0;
}
