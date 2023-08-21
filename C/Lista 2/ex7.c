#include <stdio.h>

int main(){
    int a, b, c, x, y, z;
    printf("Digite 5 numeros:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &x, &y, &z);
    if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    
    if (x > z) {
        int tmp = z;
        z = x;
        x = tmp;
    }
    if (x > y) {
        int tmp = y;
        y = b;
        x = tmp;
    }
    if (c > x) {
        int tmp = x;
        x = c;
        c = tmp;
    }
    printf("%d %d %d %d %d %d", a, b, c, x, y, z);


	return 0;
	
}

