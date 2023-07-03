#include<stdio.h>

int main() {
    
    float p1, p2, p3, M1, M2, M3, M4;
    
    scanf("%f", & p1); 
    scanf("%f", & p2);
    scanf("%f", & p3);
    
    M1 = p1 * 5;
    M2 = p2 * 3;
    M3 = p3 * 2;
    
    M4 = (M1 + M2 + M3)/10;
    
    printf("%f", M4);
    
    return(0);
}