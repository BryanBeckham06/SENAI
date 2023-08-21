#include <stdio.h>
int main(){
	
	
	int a, b, c;
	printf("Digite os valores dos 3 lados de um triangulo\nseparado por espaços:");
		scanf("%d%d%d",&a, &b, &c);
		
	if(a == b && b == c && a == c)
		printf("Equilatero\n");
	
	else if(a != b && a!= c && b != c)
        printf("Escaleno\n");
    else 
        printf("Isosceles\n");
	
	return 0;
	
}
