#include<stdio.h>

int main() {
    
    char j1, j2;
    
    scanf("%c\n", & j1); // R = pedra, P = paper, S = tesoura
    scanf("%c", & j2);
    
    if(j1 == 'R' && j2 == 'S')
        printf("jog1");
        
    else if(j1 == 'S' && j2 == 'P')
        printf("jog1");
        
    else if(j1 == 'P' && j2 == 'R')
        printf("jog1");
        
    else if(j2 == 'R' && j1 == 'S')
        printf("jog2");
        
    else if(j2 == 'S' && j1 == 'P')
        printf("jog2");
        
    else if(j2 == 'P' && j1 == 'R')
        printf("jog2");
        
    else printf("empate");
    
    return(0);

}