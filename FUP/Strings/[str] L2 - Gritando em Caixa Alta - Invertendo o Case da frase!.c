#include<stdio.h>
#include<string.h>

int main() {
    
    int i;
    char frase[102];
    
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        
        if(frase[i] >= 'A' && frase[i] <= 'Z') {
            printf("%c", frase[i] + 32);
        }
        
        else if(frase[i] >= 'a' && frase[i] <= 'z') {
            printf("%c", frase[i] - 32);
        }
        else if(frase[i] == ' ') printf("%c", frase[i]);
        else printf("%c", frase[i]);

    }
    
}