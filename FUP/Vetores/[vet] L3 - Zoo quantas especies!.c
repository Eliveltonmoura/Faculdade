#include<stdio.h>

int main() {
    
    int n, repetidos = 0;
    
    scanf("%d", & n);
    int vet[n];
    
    for(int i = 0; i < n; i++) scanf("%d", & vet[i]);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) { //j percorre todos os elementos até i - 1
            if(vet[i] == vet[j]) {
                repetidos++;
                break;
            }
        }
    }
    
    printf("%d", n - repetidos);
    
}