#include<stdio.h>

int main() {
    
    int i, rotacao;
    char letra;
    
    scanf("%c", & letra);
    scanf("%d", & rotacao);
    
    for(i = 'a'; i <= 'z'; i++) {
        
        if(rotacao < 0) {
            
            if(letra - (-rotacao) < 'a') {
                letra = letra - (-rotacao) + 26;
                printf("%c", letra);
                break;
            }
            
            else {
                letra = letra - (-rotacao);
                printf("%c", letra);
                break;
            }
        }
        
        if(rotacao >= 0) {
            
            if(letra + rotacao > 'z') {
                letra += rotacao - 26;
                printf("%c", letra);
                break;
            }
            
            else {
                letra += rotacao;
                printf("%c", letra);
                break;
            }
            
        }
    }
}




/* char c, int n, total_letras = 'z' - 'a' +1;
    sacnf("%c\n%d", & c & n);
    
    c = (c - 'a' + n) % total_letras;
    if(c < 0) c += total_letras;
    printf("%c", c + 'a'); */
