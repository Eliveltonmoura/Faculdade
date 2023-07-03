#include<stdio.h>

int main() {
    
    int a, b, aux;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    aux = a;
    a = b;
    b = aux;
    
    printf("%d\n", a);
    printf("%d", b);
    
    return(0);
    
}