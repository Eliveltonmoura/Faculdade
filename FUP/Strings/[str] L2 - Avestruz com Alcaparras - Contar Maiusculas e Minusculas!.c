#include<stdio.h>

int main() {
    
    int i, cont = 0;
    char frase[102], opcao;
    
    fgets(frase, sizeof(frase), stdin);
    
    scanf("%c", & opcao);
    
    if(opcao >= 'A' && opcao <= 'Z') opcao += 32;
    
    for(i = 0; frase[i] != '\n'; i++) {
            
        if(frase[i] >= 'A' && frase[i] <= 'Z') frase[i] += 32; // transforma as letras maiusculas da frase em minuscula para facilitar na comparação
        if(frase[i] == opcao) cont++;
    }
    
    printf("%d", cont);
    
}