#include<stdio.h>

int main() {
    
    char frase, j;
    
    scanf("%c", & frase);
    
    while(frase != '\n') {
        
        if(frase == ';' || frase == '#') printf("\n");
        else printf("%c", frase);
        scanf("%c", & frase);
        
        }
}