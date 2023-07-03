#include<stdio.h>

int main() {
    
    int n = 0;
    int existe = 0;
    
    scanf("%d", &n);
    
    int vet[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d ", &vet[i]);
    }
    
    for (int i = 0; i < (n - 1); i++){
        if (vet[i] > vet[i+1]){
            existe = 1;
            break;
        }
    }
    
    if (existe == 0)
        printf("ok");
    else
        printf("precisa de ajuste");
    
    return 0;
}