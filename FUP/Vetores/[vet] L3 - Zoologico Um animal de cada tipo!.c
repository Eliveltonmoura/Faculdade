#include<stdio.h>

int main() {
    
    int esp, i, j, aux;
    
    scanf("%d", & esp);
    int vet[esp];
    
    for(i = 0; i < esp; i++)
        scanf("%d", & vet[i]);
    
    for(i = 0; i < esp; i++) {
        for(j = 1; j < esp; j++) {
            if(vet[j] < vet[j-1]) {
                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
            }
        }
    }
    
    for(i = 0; i < esp - 1; i++) {
        if(vet[i] != vet[i+1])
        printf("%d ", vet[i]);
    }
    printf("%d", vet[esp-1]);
}