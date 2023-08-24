#include <stdio.h>

int main(){
	int i, soma = 0;
	
	for(i = 0; i <= 100; i++){
		soma = soma + i;
	}
	printf("%d", soma);
	return 0;
}

