#include<stdio.h>

int main() {
	    
    int i, j, lin, col, col2;
    
    scanf("%d", & lin);
    scanf("%d", & col);
    scanf("%d", & col2);
    
    int mat1[lin][col], mat2[col][col2];
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", & mat1[i][j]);
        }
    }
    
    for(i = 0; i < col; i++) { // col são as linhas da segunda matriz
        for(j = 0; j < col2; j++) { // essas são as colunas de verdade
            scanf("%d", & mat2[i][j]);
        }
    }
    
    int mat3[50][50], k;
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col2; j++) {
            mat3[i][j] = 0;
            for(k = 0; k < col; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d ", mat3[i][j]);
        }
    }
    return 0;
}
