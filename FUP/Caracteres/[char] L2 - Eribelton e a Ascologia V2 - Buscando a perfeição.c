#include<stdio.h>

int main() {
    
    int asc = 0, encontrou;
    char nome;
    
    scanf("%c", & nome);
    
    while(nome != '\n') {
            
        asc = asc + nome;
        scanf("%c", & nome);
        
    }
    
    encontrou = 0;
    for(nome = 'a'; nome <= 'z'; nome++) {
        if((asc + nome) % 50 == 0) {
            printf("%c", nome);
            encontrou = 1;
        }
    }
    if(!encontrou) printf("sem sorte");
    
}