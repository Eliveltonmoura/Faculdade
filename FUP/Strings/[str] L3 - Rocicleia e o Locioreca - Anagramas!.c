#include<stdio.h>
#include<string.h>

int main() {
    
    int i, j, cont = 0;
    char frase[102], anag[102];
    
    fgets(frase, sizeof(frase), stdin);
    fgets(anag, sizeof(anag), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        for(j = 0; anag[j] != '\n'; j++) {
            if(frase[i] == anag[j]) {
                anag[j] = '#';
                cont++;
                break;
            }
        }
    }
    if(((strlen(frase) - 1 == cont)) && (strlen(frase) - 1 >= strlen(anag) - 1)) printf("sim");
    else printf("nao");
}