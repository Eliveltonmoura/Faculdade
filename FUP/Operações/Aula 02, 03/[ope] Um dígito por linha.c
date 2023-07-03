#include<stdio.h>

int main() {
    
    int n;
    
    scanf("%d", & n);
    
    printf("%d\n", n/1000); 
    
    n = n % 1000; // guardado o resto da divisão por 1 mil, n agora é um algarismo de 3 digitos
    
    printf("%d\n", n/100);
    
    n = n % 100;
    
    printf("%d\n", n/10);
    
    n = n % 10;
    
    printf("%d", n/1);
    
    return(0);
    
}