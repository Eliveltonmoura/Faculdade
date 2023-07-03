#include<stdio.h>

int main() {
    
    int tem_letra = 0, tem_ponto = 0;
    char c;
    
    do {
        scanf("%c", & c);
        if(c == ' ' || c == '\n') {
            
            if(tem_letra) printf("str ");
            else if(tem_ponto) printf("float ");
            else printf("int ");
            tem_letra = 0;
            tem_ponto = 0;
        } 
    
        else if(c == '.') tem_ponto = 1;
        else if((c != '-') && (c != '.') && ((c < '0') || (c > '9'))) tem_letra = 1;
        
    } while(c != '\n');
}

