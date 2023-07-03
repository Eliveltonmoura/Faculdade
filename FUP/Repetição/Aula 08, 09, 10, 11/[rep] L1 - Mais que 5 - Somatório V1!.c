#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int a, b, soma = 0, num;
    
    scanf("%d\n", & a);
    scanf("%d", & b);
    
    if(a <= b) {
        for(num = a; num <= b; num++) {
            soma = soma + num;
        }
        printf("%d", soma);
    }
    
    else if(a > b) printf("invalido");
    
    return(0);
}