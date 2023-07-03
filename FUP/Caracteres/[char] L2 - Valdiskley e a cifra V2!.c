#include<stdio.h>

int main() {
    
    char c, r, op;
    int n, total_letras = 'z' - 'a' + 1;
    scanf("%c\n", & c);
    scanf("%c\n", & op);
    scanf("%c", & r);
    
    n = r - 'a'; 
    
    if(op == '-') n = - n;
    
    c = (c - 'a' + n) % total_letras;
    
    if(c < 0) c += total_letras;
    
    printf("%c", c + 'a');
    
}