#include<stdio.h>

int vogal(char c) {
    
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int letra(char c) {
    
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    
}

int consoante (char c) {
    
    return(letra(c)) && !vogal(c);
    
}

int main() {
    
    int i;
    char frase[102];
    
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        printf("%c", frase[i]);
        
        if(vogal(frase[i]) && consoante(frase[i+1]))
            printf("-");
    }
}