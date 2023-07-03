#include<stdio.h>

int main() {
    
    int i, cont = 0;
    char frase[102], opcao;
    
    fgets(frase, sizeof(frase), stdin);
    
    scanf("%c", & opcao);
    // se a opção for uma letra maiscula, ela será convertida para minuscula
    if(opcao >= 'A' && opcao <= 'Z') opcao += 32; // não importa se ler uma letra maiuscula ou minuscula, ela sempre vai ser minuscula por causa dessa condição
        printf("%c\n", opcao); // trecho apenas para verificar
    for(i = 0; frase[i] != '\n'; i++) {
            
        if(frase[i] >= 'A' && frase[i] <= 'Z') frase[i] += 32; // transforma as letras maiusculas da frase em minuscula para facilitar na comparação
            printf("%c", frase[i]); // trecho apenas para verificar
        if(frase[i] == opcao) cont++;
    }
    
    printf("\n%d", cont);
    
}