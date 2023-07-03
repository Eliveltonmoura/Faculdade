#include<stdio.h>
#include<string.h>

int main() {
    
    int i, k;
    char frase[102];
    
    fgets(frase, sizeof(frase), stdin);
    
//    printf ("%lu", strlen(frase));
    k = strlen(frase) - 2;
    
    for(i = k ; i >= 0; i--) {
        
        printf("%c", frase[i]);
        
    }
}