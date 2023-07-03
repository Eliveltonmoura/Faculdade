#include<stdio.h>
#include<limits.h>

int main() {
    
    int asc = 0, menor_asc = INT_MAX, minltra;
    char nome;
    
    scanf("%c", & nome);
    
    while(nome != '\n') {
        
        asc += nome;
        scanf("%c", & nome);
        
    }
    
    printf("%d\n", asc % 50);
    
    for(nome = 'a'; nome <= 'z'; nome++) {
        
        if((nome + asc) % 50 < menor_asc) {
            menor_asc = (asc + nome) % 50;
            minltra = nome;
        }
    }
    
    printf("%c\n%d", minltra, menor_asc);
    
}