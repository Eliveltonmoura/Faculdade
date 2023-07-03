#include <stdio.h>
int main() {
    double ncoelhos, fib1 = 1, fib2 = 0, soma = 0, i;
    scanf("%lf", &ncoelhos);
    
    for(i = 0; i < ncoelhos; i++){
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        printf("%.lf\n", soma);
    }

    return 0;
}
