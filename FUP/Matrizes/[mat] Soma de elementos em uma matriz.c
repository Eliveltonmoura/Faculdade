#include<stdio.h>

int main() {
    
    int i, j, m[2][3], soma = 0;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", & m[i][j]);
        }   
    }
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            soma += m[i][j];
        }
    }
    printf("%d", soma);
}