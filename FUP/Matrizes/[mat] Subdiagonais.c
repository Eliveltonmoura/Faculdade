#include<stdio.h>

int main() {
    
    int i, j, soma = 0, sub = 0, result = 0, m[5][5];
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", & m[i][j]);
        }
    }
    
    for(i = 0; i < 5; i++) {
        soma += m[i][i];
    }
    
    for(i = 0; i < 5; i++) {
        sub += m[i][4-i];
    }
    
    printf("%d", soma - sub);
    
    /*
    soma += m[0][0] + m[1][1] + m[2][2] + m[3][3] + m[4][4];
    sub += m[0][4] + m[1][3] + m[2][2] + m[3][1] + m[4][0];
    
    result = soma - sub;
    
    printf("%d", result);
    */
}