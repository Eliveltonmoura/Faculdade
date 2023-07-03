#include<stdio.h>

int main() {
    
    int i;
    char frase[102];
    
    fgets(frase, sizeof(frase), stdin);
    
    //printf("%c", frase[0]);
    
    for(i = 0; frase[i] != '\n'; i++) {
        while((frase[i] == ' ' && frase[i-1] == frase[i+1])) {
            if((frase[i] != 'a') || (frase[i] != 'e') || (frase[i] != 'i') || (frase[i] != 'o') || (frase[i] != 'u')) {
                i+=2;
            }
        }
        
    printf("%c", frase[i]);
    }
}