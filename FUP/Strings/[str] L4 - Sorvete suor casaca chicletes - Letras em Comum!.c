#include<stdio.h>

int main() {
    
    int i, j, cont = 0, encontrou;
    char s[102], letras[102];
    
    scanf("%s", letras);
    
    for(i = 0; letras[i] != 0; i++) { // verificando repetidas
        for(j = i + 1; letras[j] != 0; j++) {
            if(letras[i] == letras[j])
                letras[i] = '#';
        }
    }
    
    while(scanf("%s", s) > 0) {
        
        for(i = 0; letras[i] != 0; i++) {
            encontrou = 0;
            for(j = 0; s[j] != 0; j++) {
                if(letras[i] == s[j]) encontrou = 1;
            }
            if(!encontrou) letras[i] = '#';
        }
    }
    
    for(i = 0; letras[i] != 0; i++) {
        if(letras[i] != '#') cont++;
    }
    printf("%d", cont);
}