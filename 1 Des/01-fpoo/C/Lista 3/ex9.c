#include <stdio.h>

int main (){
    
	int i=0, n=0;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);
    
	while ( i <= 9 )
    {
        i++;
        printf ("%d X %d = %d\n", n, i, n*i);	
    }

    return 0;
}
