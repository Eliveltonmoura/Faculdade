#include<stdio.h>
#include<string.h>

int main() {
    
    int i, j, k, cont; 
    char ultron[22], palavras[102];  
    
    scanf("%s", ultron); // se for scanf então não use o '\n', use '\0' ou 0.
    
    while(scanf("%s", palavras) > 0) {
        cont = 0;
        for(j = 0; palavras[j] != 0; j++) {
            for(k = 0; ultron[k] != 0; k++) {
                if(palavras[j] == ultron[k]) {
                    cont++;
                }
            }
        }
         
    if(cont <= 0.50 * (strlen(palavras))) printf("pessoa ");
    else if(cont == strlen(palavras)) printf("chefe ");
    else printf("ultron ");
        
    }
}
