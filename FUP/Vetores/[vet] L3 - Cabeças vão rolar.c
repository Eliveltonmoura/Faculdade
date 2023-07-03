#include<stdio.h>

int main() {
    
    int n, x, i;
    
    scanf("%d", & n);
    scanf("%d", & x);
    
    int vet[n];
    
    for(i = 0; i < n; i++) vet[i] = i+1;
    x = x % n; //pessoa na posição x morre
    
    for(i = 0; i < n-1; i++) {
        
        vet[x] = 0;
        while(vet[x] == 0) x = (x+1) % n; 
        
        x = (x+1) % n;
        while(vet[x] == 0) x = (x+1) % n;
        
    }
    for(i = 0; i < n; i++){
    if(vet[i] != 0) printf("%d", vet[i]);
    }
}

