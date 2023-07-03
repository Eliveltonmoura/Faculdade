#include<stdio.h>

int main() {
    
    int soma = 0;
    char nome;
    
    scanf("%c", & nome);
    
    //for(scanf("%c", & nome); nome != '\n'; scanf("%c", & nome)) { poderia ser assim, removeria os outros scanf's
    while(nome != '\n') {
        
        soma += nome;
        scanf("%c", & nome);
        
    }
    printf("%d", soma % 50);
    
    return(0);
}