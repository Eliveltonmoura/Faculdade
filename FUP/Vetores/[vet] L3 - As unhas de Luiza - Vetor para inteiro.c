#include<stdio.h>

int main() {
    
    int n, i, pot, valor = 0;
    
    scanf("%d", & n);
    int vet[n];
    
    for(i = 0; i < n; i++) scanf("%d", & vet[i]);
    
    pot = 1;
    for(i = n - 1; i >= 0; i--) {
        
        valor += vet[i] * pot;
        pot = pot * 10;
    
    }
    printf("%d", valor);
}