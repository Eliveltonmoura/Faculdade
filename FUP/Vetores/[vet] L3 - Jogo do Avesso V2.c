#include<stdio.h>

int main() {
    
    int nops, i, j, grito;
    
    scanf("%d", & nops);
    scanf("%d\n", & grito);
    
    int vet[nops];
    
    for(i = 0; i < nops; i++) scanf("%d\n", & vet[i]);
    
    int vegr[grito];
    
    for(i = 0; i < grito; i++) scanf("%d", & vegr[i]);
    
    for(i = 0; i < nops; i++) {
        for(j = 0; j < grito; j++) {
            if(vet[i] == vegr[j] || vet[i] == - vegr[j]) {
                if(i > 0) vet[i-1] = - vet[i-1];
                if(i < nops - 1) vet[i+1] = - vet[i+1];
            }
        }
    }
    
    for(i = 0; i < nops; i++) printf("%d ", vet[i]);
    
}