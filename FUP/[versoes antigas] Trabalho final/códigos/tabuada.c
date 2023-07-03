#include<stdio.h>

int main() {
	
	int i, n;
	
	printf("Digite o numero para a tabuada:\n");
	scanf("%d", &n);
	
	printf("\n+--Resultado--+\n");
	
	for(i = 1; i <= 10; i++) {
		printf("| %2d * %d = %2d |\n", i, n, (i*n));
	}
	
	printf("+-------------+\n");
}
