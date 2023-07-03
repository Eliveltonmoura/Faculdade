#include<stdio.h>

int main() {
    
    int an, i, j, cont = 0;
    
    scanf("%d", & an);
    int vet[an];
    
    for(i = 0; i < an; i++) scanf("%d", & vet[i]);
    
    for(i = 0; i < an; i++) {
        for(j = 0; j < an; j++) {
         
            if((vet[i] == -vet[j]) && vet[i] != 0) {
                cont++;
                vet[i] = 0;
                vet[j] = 0;
            }
        }
    }
    
    printf("%d", cont);
    
}