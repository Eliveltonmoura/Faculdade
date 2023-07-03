#include<stdio.h>

int main() {
    
    int i, j, lin, col;
    
    scanf("%d", & lin);
    scanf("%d", & col);
    
    int ma[lin][col], mb[lin][col], soma[lin][col];
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", & ma[i][j]);
        }
    }
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", & mb[i][j]);
        }
    }
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            soma[i][j] = ma[i][j] + mb[i][j];
        }
    }
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", soma[i][j]);
        printf("\n");
        }
    }
}