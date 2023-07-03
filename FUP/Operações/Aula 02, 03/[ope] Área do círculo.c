#include<stdio.h>

int main() {
    
    float thun, raio, c;
    
    scanf("%f", & thun); // definindo o raio
    
    c = pow(thun, 2); // elevando a segunda potência e guardando na variavel c
    
    raio = c * 3.14;
    
    printf("%f", raio);
    
    return(0);
}