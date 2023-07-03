#include<stdio.h>

double converte_para_celsius(double faren) {
    
    faren = (faren - 32) * 5 / 9; // convertendo farenheit para celsius
    
    return faren;
    
}

int main() {
    
    double faren;
    
    scanf("%lf", & faren);
    
    printf("%lf", converte_para_celsius(faren));
    
}