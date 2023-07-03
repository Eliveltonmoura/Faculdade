#include <stdio.h>
int main() {
    
    int P, S, E, X, dif = 0; // Poço, Salto, E = cair
    
    scanf("%d\n", &P);
    scanf("%d\n", &S);
    scanf("%d", &E);
    
    X = S;
    while(P > S) {
        
        printf("%d %d\n", dif, S);
        
        dif = S - E;
        
        S = X + dif;
        
    }
    
    printf("%d ", dif);
    printf("saiu\n");
    
    return 0;
}