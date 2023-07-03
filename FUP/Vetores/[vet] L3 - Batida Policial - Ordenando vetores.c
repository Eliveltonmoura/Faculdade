#include<stdio.h>

int main() {
    
    int n = 8, aux, i, j; // tamanho e quantidade do vetor
    
    scanf("%d", & n); // escrevendo o tamanho
    
    int vet[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", & vet[i]); // escreve os numeros do vetor
    }
    
    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j++) {
            if(vet[i] < vet[j-1]) {
                aux = vet[i];
                vet[i] = vet[j-1];
                vet[j-1] = aux;
            }
        }
    }
    
    for(i = 0; i < n; i++) printf("%d ", vet[i]);
}