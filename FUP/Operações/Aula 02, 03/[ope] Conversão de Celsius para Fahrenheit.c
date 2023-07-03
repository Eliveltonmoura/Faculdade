#include<stdio.h>

int main() {
    
    int fahrenheit, celsius;
    
    scanf("%d", & celsius); 
    
    fahrenheit = celsius * 9 / 5 + 32; // fórmula da conversão de celsius pra fahrenheit
    
    printf("%d", fahrenheit);
    
    return(0);
}