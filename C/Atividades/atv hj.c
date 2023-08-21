#include <stdio.h>
int main (){
	 
	 char nome[20];
	 float sis, sis1, sis2, sis3 , sis4, sis5, dia1, dia2, dia3, dia4, dia5;
	  float media, media2;
	  printf("Digite o nome:");
		scanf("%s",&nome);
	     
		 //Escreva o resultado separado por espaços
		 
		 printf("Digite o resultado da pressao da sistolica e do diatolica 1:");
		scanf("%f %f",&sis1, &dia1);
		 printf("Digite o resultado da pressao da sistolica e do diatolica 2:");
		scanf("%f %f",&sis2, &dia2);
		 printf("Digite o resultado da pressao da sistolica e do diatolica 3:");
		scanf("%f %f",&sis3, &dia3);
		 printf("Digite o resultado da pressao da sistolica e do diatolica 4:");
		scanf("%f %f",&sis4, &dia4);
		 printf("Digite o resultado da pressao da sistolica e do diatolica 5:");
		scanf("%f %f",&sis5, &dia5);
		
		media = (sis1 + sis2 + sis3 + sis4 + sis5)/5 ;
		media2 = (dia1 + dia2 + dia3 + dia4 + dia5)/5;
		
		printf("Nome: %s",nome);
		printf("A media dos resultados da sistolica e: %.2f\n",media);
		printf("A media dos resultados da diatolica e: %.2f\n",media2);
	
	
	
	
	
	
	return 0;
}

