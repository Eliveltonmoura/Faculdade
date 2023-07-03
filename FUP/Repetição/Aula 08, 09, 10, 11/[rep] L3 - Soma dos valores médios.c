#include<stdio.h>
#include<limits.h>

int main() {
    
    int N, quant, soma = 0;
    int menor = INT_MAX;
    int maior = INT_MIN;
    
    scanf("%d", & N);
    
    for(int i = 0; i < N; i++) {
            
        scanf("%d", & quant);
        
        if(quant < menor) menor = quant;
        if(quant > maior) maior = quant;
        
        soma = soma + quant;
    }
     soma = soma - menor - maior;
    
    printf("%d", soma);
    
    return(0);
    
}