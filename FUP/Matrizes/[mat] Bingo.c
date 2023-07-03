#include<stdio.h>

int main() {
    
    int i, j, k, cont = 0, vet[6], m[4][4];
    
    for(i = 0; i < 6; i++) {
        scanf("%d", & vet[i]);
    }
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", & m[i][j]);
        }
    }
    for(i = 0; i < 6; i++) {
        for(k = 0; k < 4; k++) {
            for(j = 0; j < 4; j++) {
                if(vet[i] == m[k][j]) cont++;
            }
        }
    }
    printf("%d", cont);
}