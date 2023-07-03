#include<stdio.h>
#include<string.h>

int main() {

    char palavra[102], anterior[102], ordenado = 1;
    
    anterior[0] = 0;
    while(scanf("%s", palavra) > 0) {
        
        if(strcmp(anterior, palavra) > 0) {
            ordenado = 0;
            break;
        }
        strcpy(anterior, palavra);
        
    }
    
    if(ordenado) printf("sim");
    else printf("nao");
    
}