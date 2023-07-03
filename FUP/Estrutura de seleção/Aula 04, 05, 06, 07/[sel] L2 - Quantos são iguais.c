#include<stdio.h>

int main() {
    
    int jog1, jog2, jog3;
    
    scanf("%d\n", & jog1);
    scanf("%d\n", & jog2);
    scanf("%d", & jog3);
    
    if(jog1 == jog2 && jog1 == jog3) printf("3"); // os três obtiveram o mesmo resultado
    else if((jog1 != jog2 && jog2 != jog3 && jog1 != jog3)) printf("0"); // os três obtiveram diferentes resultados
    else if((jog1 == jog2 && jog2 != jog3) || (jog1 == jog3 && jog3 != jog2) || (jog2 == jog3 && jog3 != jog1)) printf("2");

    return(0);
}