#include<stdio.h>

int main() {
    
    int soma = 0, n = 0;
    char c;
    
    do {
        scanf("%c", & c);
        if(c >= '0' && c <= '9')
            n = 10 * n + (c - '0');
        else {
            soma += n;
            n = 0;
        }
    } while(c != '\n');
    
    printf("%d", soma);
    
}