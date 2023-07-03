#include<stdio.h>

int main() {
    
    int vet[8], n, aux, i;
    
    scanf("%d", & n);
    
    for(i = 0; i < 8; i++) {
        aux = n % 10;
        n = n/10;
        vet[i] = aux;
    }
    
    for(i = 7; i >= 0; i--) {
        
        if(vet[i] != 0) printf("%d ", vet[i]);
        
    }
    
}