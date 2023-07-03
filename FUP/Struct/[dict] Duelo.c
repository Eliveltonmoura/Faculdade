#include<stdio.h>

typedef struct {
    int vida;
    int ataque;
} personagem;

void duelo(personagem play1, personagem play2) {
        
    while(play1.vida > 0 && play2.vida > 0) {
        
        play2.vida = play2.vida - play1.ataque;
        play1.vida = play1.vida - play2.ataque;
        
    }  
    
        if(play1.vida <= 0 && play2.vida <= 0)
            printf("Empate");
            
        else if(play1.vida <= 0)
            printf("Personagem 2");
            
        else if(play2.vida <= 0)
            printf("Personagem 1");
}

int main() {
    
    personagem play1, play2;
    
    scanf("%d\n", & play1.vida);
    scanf("%d\n", & play1.ataque);
    scanf("%d\n", & play2.vida);
    scanf("%d", & play2.ataque);
    
    duelo(play1, play2);
}