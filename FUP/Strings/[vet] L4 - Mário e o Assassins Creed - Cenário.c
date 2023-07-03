#include<stdio.h>
#include<string.h>

int main() {
    
    int i, n, nivel, maior;
    
    scanf("%d", & n);
    
    int vet[n];
    
    for(i = 0; i < n; i++) { // ler vetor
        scanf("%d", & vet[i]);
    }
    
    maior = 0;
    for(i = 0; i < n; i++) { // condição para pegar o maior número
        if(vet[i] > maior)
        maior = vet[i];
    }
    
    nivel = 0;
    for(nivel = maior; nivel >= 1; nivel--) { // printar os niveis comparando se são iguais ou menores que o maior
        for(i = 0; i < n; i++) {
            if(vet[i] >= nivel) printf("#");
            else printf("_");
        }
        printf("\n");
    }
}