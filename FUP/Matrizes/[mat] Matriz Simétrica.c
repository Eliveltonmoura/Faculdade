#include<stdio.h>

int main() {
    
    int i, j, m[3][3], simetrica;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", & m[i][j]);
        }
    }
    
    simetrica = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(m[j][i] != m[i][j]) 
                simetrica = 0;
        }
    }
    
    if(simetrica) printf("sim");
    else printf("nao");
}