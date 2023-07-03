#include <stdio.h>

int main() {
	int i, j, lin, col;
	
	scanf("%d", &lin);
	scanf("%d", &col);
	
	int mat[lin][col];
	
	for(i = 0; i < lin; i++) {
		for(j = 0; j < col; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	int contlinha = 0;
	for(i = 0; i < lin; i++) {
		for(j = 0; j < col; j++) {
			if(mat[i][j] % 2 == 0) {
				contlinha++;
				break;
			}	
		}
	}
	
	int contcoluna = 0;
	for(j = 0; j < col; j++) {
		for(i = 0; i < lin; i++) {
			if(mat[i][j] % 2 == 0) {
				contcoluna++;
				break;
			}
		}
	}
	
	printf("Total de linhas: %d\n", contlinha);
	printf("Total de colunas:%d", contcoluna);
	
	return(0);
}
