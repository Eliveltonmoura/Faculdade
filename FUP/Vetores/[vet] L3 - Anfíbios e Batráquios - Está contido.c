
#include<stdio.h>

int main() {
    
    int n1, n2, cont = 0;
    
    scanf("%d", & n1);
    
    int con1[n1];
    
    for(int i = 0; i < n1; i++) // escrevi
        scanf("%d", & con1[i]);
        
    scanf("%d", & n2);
    int con2[n2];
    
    for(int i = 0; i < n2; i++) // escrevi
        scanf("%d", & con2[i]);
        
    for(int i = 0; i < n1; i++) {  
        for(int j = 0; j < n2; j++) {
            if(con1[i] == con2[j]) {
                cont++;
                break;
            }
        }
    }
    
    if(n1 - cont == 0) printf("sim");
    else printf("nao");
    
}