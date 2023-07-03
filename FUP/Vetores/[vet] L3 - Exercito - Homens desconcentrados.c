#include<stdio.h>

int main() {
    
    int Qsoldiers, i, cont = 0;
    
    scanf("%d", & Qsoldiers);
    int vet[Qsoldiers];
    
    for(i = 0; i < Qsoldiers; i++) 
        scanf("%d", & vet[i]);
    
    for(i = 0; i < Qsoldiers; i++) {
        
        if(vet[i] == 0) {
            
            if((i == 0 && vet[i+1] == 0) || (i == Qsoldiers - 1 && vet[i-1] == 0) || (i > 0 && i < Qsoldiers && vet[i+1] == 0 && vet[i-1] == 0))
            cont++;
            
        }
    }
    printf("%d", cont);
}
//alternativa curto-circuito
//if(v[i] == 0 && (i==0 || v[i-1]==0) && (i == Qsoldiers-1 || v[i+1] == 0)) cont++; 