#include<stdio.h>

int main() {
	
	int a, b, soma;
	
	scanf("%d\n", & a);
	scanf("%d", & b);
	
	if(a <= b) {
		
		for(a; a <= b; a++) {
		
		soma = soma + a;
		
		}
		
		printf("%d", soma);
		
	}
	
	else printf("invalido");
	
	return(0);
}
