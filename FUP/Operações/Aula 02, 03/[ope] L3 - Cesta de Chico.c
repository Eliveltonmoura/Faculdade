#include<stdio.h>

int main() {
    
    int cesta, bananas, goiabas, mangas, min;
    
    scanf("%d\n", & cesta);
    scanf("%d\n", & bananas);
    scanf("%d\n", & goiabas);
    scanf("%d", & mangas);
    
    min = goiabas + bananas + mangas - 1;
    cesta = min / cesta + 1;
    
    printf("%d\n", cesta);
    
    return(0);
}