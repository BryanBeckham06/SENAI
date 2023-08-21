#include <stdio.h>
int main(){
   int raio, altura;
   int area, volume;
   int pi = 3;
   printf("Digite o raio de um cilindro");
   scanf("%d",&raio);
   printf("Digite a altura do cilindro");
   scanf("%d",&altura);
   
   int base = 2 * pi * raio * raio;
   int lateral = 2 * pi * raio * altura;
   area = lateral + base;
   volume = pi * raio * raio * altura;
   printf("Raio = %d\n", raio);
   printf("Altura = %d\n", altura);
   printf("Area do cilindro = %d\n", area);
   printf("Volume = %d\n", volume);     
   return 0;
}
	
