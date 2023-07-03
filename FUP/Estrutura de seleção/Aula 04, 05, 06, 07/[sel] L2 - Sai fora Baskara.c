#include<stdio.h>
#include<math.h>

int main() {
    
    float a, b, c, delta, X, X1;
    
    printf("De o valor de A: ");
    scanf("%f", & a);
    printf("De o valor de B: ");
    scanf("%f", & b);
    printf("De o valor de C: ");
    scanf("%f", & c);
   
    delta = pow(b,2) - 4 * a * c; // definido o valor de delta
    printf("Delta: %.2f\n", delta);
    
    
    if(delta < 0) printf("nao ha raiz real"); // caso o valor do delta seja negativo, o programa acaba aqui
    
    else if(delta > 0) {
        
        X = (-b + sqrt(delta)) / (2*a);
        X1 = (-b - sqrt(delta)) / (2*a);
        printf("O valor negativo do X = %.2f\n", X);
        printf("O valor positivo do X = %.2f", X1);
        
    }
    
    else if(delta == 0) {
        
        X = (-b + 0) / (2*a);
        printf("%.2f", X);
    }
    
    return(0);
}
