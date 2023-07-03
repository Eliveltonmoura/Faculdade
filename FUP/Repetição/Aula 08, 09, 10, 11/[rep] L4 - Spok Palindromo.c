#include<stdio.h>

int main() {
    
    int palin, aux, palin2 = 0;
    
    scanf("%d", & palin);
    
    aux = palin;
    
    while(aux > 0) {
        
        palin2 = 10 * palin2 + (aux % 10); // empurra o último numero pra frente, EX: 321 vai ficar 123
        
        aux = aux/10; //essa operação descarta o último número introduzido até que não reste nenhum
        
    }
    
    if(palin == palin2) printf("1");
    
    else printf("0");
    
    return(0);
    
}