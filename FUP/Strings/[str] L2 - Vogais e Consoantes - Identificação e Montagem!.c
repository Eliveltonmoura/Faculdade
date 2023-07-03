#include<stdio.h>

int main() {
    
    int i;
    char frase[52];
    
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        // pega todas as vogais e converte para 'v'
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
        frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
            printf("v");
        // se nao for nenhuma vogal,, será consoante, e sendo consoante converte para 'c'
        else if((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
            printf("c");
        // se for qualuer outro caractere, ele mesmo será printado
        else printf("%c", frase[i]);
    }
    
}