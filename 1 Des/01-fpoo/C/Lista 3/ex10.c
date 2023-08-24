#include <stdio.h>

int main(void){
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, i, temp;
	
	printf("Insira 10 numeros: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
	
	for(i = 0; i < 100; i++){
		if (n1 < n2){
			temp = n1;
			n1 = n2;
			n2 = temp;
		}
		if (n2 < n3){
			temp = n2;
			n2 = n3;
			n3 = temp;
		}
		if (n3 < n4){
			temp = n3;
			n3 = n4;
			n4 = temp;
		}
		if (n4 < n5){
			temp = n4;
			n4 = n5;
			n5 = temp;
		}
		if (n5 < n6){
			temp = n5;
			n5 = n6;
			n6 = temp;
		}
		if (n6 < n7){
			temp = n6;
			n6 = n7;
			n7 = temp;
		}
		if (n7 < n8){
			temp = n7;
			n7 = n8;
			n8 = temp;
		}
		if (n8 < n9){
			temp = n8;
			n8 = n9;
			n9 = temp;
		}
		if (n9 < n10){
			temp = n9;
			n9 = n10;
			n10 = temp;
		}
	}
	
	printf("Maior: %d", n1);
	return 0;
}
