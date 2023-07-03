#include<stdio.h>

int main() {
    
    int jog1, jog2, jog3;
    
    scanf("%d\n", & jog1);
    scanf("%d\n", & jog2);
    scanf("%d", & jog3);
    
    if(jog1 == jog2 && jog2 != jog3) printf("jog3");
    else if(jog1 == jog3 && jog2 != jog3) printf("jog2");
    else if(jog1 != jog3 && jog2 == jog3) printf("jog1");
    else if(jog1 == jog3 && jog2 == jog3) printf("empate");
    
    return(0);
    
}