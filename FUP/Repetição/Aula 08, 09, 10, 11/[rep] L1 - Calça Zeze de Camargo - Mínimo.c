#include <stdio.h>
#include <limits.h>

int main(){
    int calca[5];
    int menor = INT_MAX, i;
    
    for(i = 0; i < 5; i++) {
        
        scanf("%d", & calca[i]);
        
        if(calca[i] < menor)
            menor = calca[i];
    }
    
    printf("%d", menor);
    
    return 0;
}