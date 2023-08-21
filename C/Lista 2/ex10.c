#include <stdio.h>
int main(){
	
	float nota1,nota2,nota3, media;
	
	printf("Digite as tres notas separadas por espaços:");
		scanf("%f %f %f",&nota1,&nota2,&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	printf("Sua Media: %.2f\n",media);
	
	if(media >=6)
		printf("Aprovado");
	else if(media >=4)
		printf("Recuperaçao");
	else if(media <4)
		printf("Reprovado");
		
	return 0;
}
