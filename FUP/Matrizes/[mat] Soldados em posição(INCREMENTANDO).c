#include<stdio.h>

int main() {
    
    int i, j, mat[3][3], cont = 0;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", & mat[i][j]);
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(mat[j][i] < mat[j+1][i]) {
                cont++;
            }
        }
    }
    
    printf("%d", cont);
}