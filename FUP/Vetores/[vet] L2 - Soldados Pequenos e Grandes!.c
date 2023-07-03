#include<stdio.h>

int main() {
    
    int n, i;
    double soma = 0;
    double media = 0;
    scanf("%d", & n);
    
    double vet[n];
    
    for(i = 0; i < n; i++) {
        
        scanf("%lf", & vet[i]);
        
    }
    
    for(i = 0; i < n; i++) {
        
        soma += vet[i];    
        
    }
    
    media = soma/n;
    printf("%.2lf\n", media);
    
    for(i = 0; i < n; i++) {
        
        if(vet[i] < media) printf("P ");
        else if(vet[i] > media) printf("G ");
        else if(vet[i] == media) printf("M ");
        
    }
    
    return(0);
    
}