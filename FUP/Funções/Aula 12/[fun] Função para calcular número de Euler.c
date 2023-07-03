#include<stdio.h>

double fatorial(int n) {
    
    double fat = 1;
    
    for(int i = 2; i <= n; i++) {
        
        fat = fat * i;
        
    }
    
    return fat;

}

double euler(double N) {
    
    double soma=1;
    
    for(int i = 1; i <= N; i++) {
        
        soma = soma + 1/fatorial(i);
        
    }
    
    return soma;
}

int main() {
    
    int fat;
    
    scanf("%d", & fat);
    
    printf("%lf", euler(fat));
    
}