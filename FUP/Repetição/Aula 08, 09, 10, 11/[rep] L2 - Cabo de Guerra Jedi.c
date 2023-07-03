#include<stdio.h>

int main() {
    
    int i, nuns, aux, jedi = 0, sith = 0;
    
    scanf("%d\n", & nuns);
    
    for(i=0; i < nuns; i++) {
        scanf("%d", & aux);
        if(i < nuns/2) jedi = jedi + aux;
        else sith = sith + aux;
    }
        
    if(jedi > sith) printf("Jedi"); 
    else if(sith > jedi) printf("Sith");
    else printf("Empate");
    
    return(0);
    
}