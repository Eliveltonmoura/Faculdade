#include<stdio.h>

int main() {
    
    int a, b, soma = 0, num;
    
    scanf("%d\n", & a);
    scanf("%d", & b);
    
    if(a <= b) {
        for(num = a; num <= b; num++) {
            if(num % 2 == 0)
                soma = soma + num;
        }
        printf("%d", soma);
    }
    
    else if(a > b) printf("invalido");
    
    return(0);
}