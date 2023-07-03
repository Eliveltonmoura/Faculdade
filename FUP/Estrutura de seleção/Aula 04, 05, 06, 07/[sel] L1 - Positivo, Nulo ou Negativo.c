#include<stdio.h>

int main() {
    
    int a;
    
    scanf("%d", & a);
    
    if(a == 0) printf("nulo");
        
    if(a > 0) printf("positivo");
        
    if(a < 0) printf("negativo");
    
    return (0);
}