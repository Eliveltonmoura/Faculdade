#include<stdio.h>

int main() {
	
	int a, b, fatoracao, cont;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	int i = 2;
	
	fatoracao = a;
	if(b > a) {
		fatoracao = b;
	}
	
	while(fatoracao > 1) {
		cont = 0;
		
		while(fatoracao % i == 0) {
			fatoracao = fatoracao/i;
			cont++;
		}
		
		if(cont > 0) {
			printf("%d", cont);
		}
		i++;
	}
}
