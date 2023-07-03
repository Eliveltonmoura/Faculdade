#include<stdio.h>

int main() {
    
    int N, lisu, liin, cnt = 0, quant; // N = numero qualquer, lisu = lmt superior, liin = lmt inferior, quant = quntidade de numeros referente à N
    
    scanf("%d", & N);
    scanf("%d", & liin);
    scanf("%d", & lisu);
    
    for(int i = 0; i < N; i++) {
        
        scanf("%d", & quant);
        
        if((quant <= lisu) && (quant >= liin)) cnt++;
        
    }
    printf("%d", cnt);
    
    
}