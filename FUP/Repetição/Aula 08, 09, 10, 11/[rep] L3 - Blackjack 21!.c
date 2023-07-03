#include<stdio.h>

int main() {
    
    int N, valor, quantAs = 0, soma = 0; // valor é dependente de N
    
    scanf("%d", & N);
    
    for(int i = 0; i < N; i++) {
        
        scanf("%d", & valor);
        
        if(valor == 1) {
            soma += 11;
            quantAs++;
        }
        
        else if(valor >= 10) {
            soma += 10;
        }
        else if(valor < 10 && valor > 1) soma+=valor;
        
    }
    
    while(soma > 21 && quantAs > 0) {
        
        soma = soma - 10;
        quantAs--;
        
    }
    
    printf("%d", soma);
    
    return(0);
    
}