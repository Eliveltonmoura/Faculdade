#include<stdio.h>
#include<string.h>

typedef struct {
    
    float num1, num2;
    
} expressao;

expressao ler_num() {
    
    expressao a;
    
    scanf("%f", & a.num1);
    scanf("%f", & a.num2);
    
    return a;
}

void oprc(expressao a) {
    
    printf("%.f ", a.num1 + a.num2);
    printf("%.f ", a.num1 - a.num2);
    printf("%.1f ", a.num1 / a.num2);
    printf("%.f", a.num1 * a.num2);
    
}

int main() {
    
    expressao a = ler_num();
    oprc(a);
    
}