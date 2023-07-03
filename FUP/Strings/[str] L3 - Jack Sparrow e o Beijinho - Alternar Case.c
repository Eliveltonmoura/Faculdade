#include<stdio.h>

int main() {
    
    int i, j, n, prox_maiuscula;
    char frase[102];
    
    scanf("%d\n", & n);
    
    for(i = 0; i < n; i++) {
        
        fgets(frase, sizeof(frase), stdin);
        if((frase[0] >= 'a') && (frase[0] <= 'z')) prox_maiuscula = 1;
        else prox_maiuscula = 0;
    
        for(j = 1; frase[j] != '\n'; j++) {
        
            if(((frase[j] >= 'a') && prox_maiuscula) && frase[j] <= 'z')
                frase[j] -= 32;
            
            else if(((frase[j] >= 'A') && !prox_maiuscula) && frase[j] <= 'Z')
                frase[j] += 32;
        
            if(frase[j] != ' ') prox_maiuscula = !prox_maiuscula;
    
        }
        printf("%s", frase);
    }
    
    
}