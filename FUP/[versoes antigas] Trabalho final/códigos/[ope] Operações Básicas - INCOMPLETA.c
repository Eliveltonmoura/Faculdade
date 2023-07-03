#include<stdio.h>

int main() {
    
    int a = 0, b = 0, c = 0;
    
    scanf("%d", & a);
    scanf("%d", & b);
    
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%.1f", (float)a/b);
    
    c = a % b;
    
    printf("%d", a % b);
    
    return(0);
}
