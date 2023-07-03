#include<stdio.h> 

int main() {
    
    char jog1, jog2;
    
    scanf("%c\n", & jog1);
    scanf("%c", & jog2);
    
    if(jog1 == 'R') {
        
        if(jog2 == 'S' || jog2 == 'L') printf("jog1");
        else if(jog2 == 'P' || jog2 == 'K') printf("jog2");
        else if(jog2 == 'R') printf("empate");
        
    }
    
    else if(jog1 == 'P') {
        
        if(jog2 == 'K' || jog2 == 'R') printf("jog1");
        else if(jog2 == 'S' || jog2 == 'L') printf("jog2");
        else if(jog2 == 'P') printf("empate");
        
    }
    
    else if(jog1 == 'S') {
        
        if(jog2 == 'P' || jog2 == 'L') printf("jog1");
        else if(jog2 == 'R' || jog2 == 'K') printf("jog2");
        else if(jog2 == 'S') printf("empate");
        
    }
    
    else if(jog1 == 'L') {//R(pedra), P(papel), S(tesoura), L(lagarto) ou K(spock
        
        if(jog2 == 'P' || jog2 == 'K') printf("jog1");
        else if(jog2 == 'R' || jog2 == 'S') printf("jog2");
        else if(jog2 == 'L') printf("empate");
        
    }
    
    else if(jog1 == 'K') {//R(pedra), P(papel), S(tesoura), L(lagarto) ou K(spock
        
        if(jog2 == 'S' || jog2 == 'R') printf("jog1");
        else if(jog2 == 'P' || jog2 == 'L') printf("jog2");
        else if(jog2 == 'K') printf("empate");
        
    }
    
    return(0);
    
}