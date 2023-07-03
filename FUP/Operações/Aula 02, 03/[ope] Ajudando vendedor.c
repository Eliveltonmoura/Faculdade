#include <stdio.h>

int main() {
    
    float num=0, desconto=0, resultado=0;
    
    scanf("%f", & num);
    
    desconto = num/10;
    resultado = num-desconto;
   
    printf("%f\n", resultado);
    printf("%f\n", num/3);
    printf("%f\n", resultado/20);
    printf("%f", num/20);
    
    return(0);
}
