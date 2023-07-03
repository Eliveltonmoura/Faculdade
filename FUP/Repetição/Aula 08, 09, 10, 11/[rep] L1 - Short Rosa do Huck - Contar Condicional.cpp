#include<stdio.h>

int main() {
	
	int N, X, quant, cont;
	
	scanf("%d\n", & N);
	scanf("%d", & X);
	
	for(int i = 0; i < N; i++) {
		
		scanf("%d", & quant);
		
		if(X == quant) cont++;
		quant = quant/10;
		
	}
	
	printf("%d", cont);
	
	return(0);
	
}
