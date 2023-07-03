#include<stdio.h>

int main() {
    
    int i;
    char frase[202];
    
    fgets(frase, sizeof(frase), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        printf("%c", frase[i]);
        if(frase[i] == ' ') {
            while(frase[i] == ' ') {
                i++;
            }
        i--;
        }
    }
}
