#include<stdio.h>
#include<math.h>

int main() {
    
    float a, b, c, delta, X, X1;
    
    scanf("%f\n", & a);
    scanf("%f\n", & b);
    scanf("%f", & c);
   
    delta = pow(b,2) - 4 * a * c;
    //printf("%f", delta);
    
    if(delta < 0) printf("nao ha raiz real");
    
    else if(delta > 0) {
        
        X = (-b + sqrt(delta)) / (2*a);
        X1 = (-b - sqrt(delta)) / (2*a);
        printf("%.2f ", X);
        printf("%.2f", X1);
        
    }
    
    else if(delta == 0) {
        
        X = (-b)
    }
    return(0);
}
