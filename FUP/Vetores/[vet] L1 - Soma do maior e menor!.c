#include<stdio.h>
#include<limits.h>

int main() {
    
    int vet[5], menor = INT_MAX, maior = INT_MIN, soma = 0;
    
    for(int i = 0; i < 5; i++) {
    
        scanf("%d", & vet[i]);
        
        if(vet[i] < menor) menor = vet[i];
        if(vet[i] > maior) maior = vet[i];
        
        soma = menor + maior;
        
    }
    
    printf("%d", soma);
    
    return(0);
    
}