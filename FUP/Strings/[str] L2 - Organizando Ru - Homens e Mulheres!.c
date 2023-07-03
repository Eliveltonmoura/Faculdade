#include<stdio.h>

int main() {
    
    int i;
    char frase[102];
    
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u')
            printf("%c", frase[i]);
    }
    
    printf("\n");
    
    for(i = 0; frase[i] != '\n'; i++) {
        
        if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != ' ')
            printf("%c", frase[i]);
    }
}