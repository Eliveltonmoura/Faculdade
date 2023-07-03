#include<stdio.h>

int main() {
    int n1, n2, n0;
    float num;
    
    scanf("%d\n", & n1);
    scanf("%d", & n2);
    
    printf("%d\n", n1/n2); //divisão inteira
    
    n0 = n1%n2;
    
    printf("%d\n", n0); //resto
    
    num = (float)n1/n2;
    
    printf("%.2f", num); // divisão quebrada
    
    return(0);
}