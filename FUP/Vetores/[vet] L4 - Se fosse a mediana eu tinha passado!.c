#include<stdio.h>

int main() {
    
    int n, i, j;
    double aux;
    double pi = 0;
    scanf("%d", & n);
    double vet[n];
    
    for(i = 0; i < n; i++)
        scanf("%lf", & vet[i]);
    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(vet[i] > vet[j]) {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    
    if(n % 2 == 0) {
            
        pi = (vet[n / 2] + vet[(n / 2) - 1]) / 2;
            
    }
        
    else 
            
        pi = vet[n / 2];
    
    
    printf("%.1f", pi);
    
}