#include<stdio.h>

int main() {
    
    int jog1, jog2;
    char opj1;
    
    scanf("%c\n", & opj1);
    scanf("%d\n", & jog1);
    scanf("%d", & jog2);
    
    if(opj1 == 'i') {
        if(jog1 % 2 == 0) printf("Perdeu");
        else printf("Venceu");
    }
    
    if(opj1 == 'p') {
        if(jog1 % 2 == 0) printf("Venceu");
        else printf("Perdeu");
    }
    
    return(0);
}