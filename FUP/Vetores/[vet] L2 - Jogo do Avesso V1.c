#include<stdio.h>

int main() {
    
    int grito, nOperarios;
    
    scanf("%d", & nOperarios);
    scanf("%d", & grito);
    
    int vet[nOperarios];
    
    for(int i = 0; i < nOperarios; i++) {
        scanf("%d", & vet[i]);
    }
    
    for(int i = 0; i < nOperarios; i++) {
        if(vet[i] == grito || vet[i] == -grito) {
            if(i > 0) vet[i-1] = - vet[i-1];
            if(i < nOperarios - 1) vet[i+1] = - vet[i+1];
        }
    }
    
    for(int i = 0; i < nOperarios; i++) printf("%d ", vet[i]);
    
    return(0);
    
}