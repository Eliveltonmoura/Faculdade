#include<stdio.h>

int main() {
    
    int n1, n2, n3, n4, maior;
    
    scanf("%d\n", & n1);
    scanf("%d\n", & n2);
    scanf("%d\n", & n3);
    scanf("%d", & n4);
    
    maior = n1;
    
    if(n2 > maior)
        maior = n2;
    if(n3 > maior)
        maior = n3;
    if(n4 > maior)
        maior = n4;
    
    printf("%d", maior);
    
    return(0);
    
}