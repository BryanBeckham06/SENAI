#include <stdio.h>
int main(){
	int caminhao, alqueires, viagens, x, y, a, b;
	
	printf("Digite o numero de alqueires:");
		scanf("%d",&x);
	printf("Digite o numero de caminhao:");
		scanf("%d",&y);
		
	alqueires = 250;
	caminhao = 18;
	
	a = x * alqueires;
	b = y * caminhao;
	
	viagens = a/b;
	
	
		printf("O numero de viagens = %d\n",viagens);
		

	
	return 0;
}
