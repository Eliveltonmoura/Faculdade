#include<stdio.h>
#include<string.h>

int main() {
    
    int n, k, i, j, cont;   
    char ultron[102], pessoa[102];
    
    scanf("%d\n", & n);
    
    for(i = 0; i < n; i++) {
        
        fgets(ultron, sizeof(ultron), stdin);
        fgets(pessoa, sizeof(pessoa), stdin);
        
        cont = 0;
        for(j = 0; pessoa[j] != '\n'; j++) {
            for(k = 0; ultron[k] != '\n'; k++) {
                if(pessoa[j] == ultron[k]) {
                    cont++;
                }
            }
        }
        
        if(cont <= 0.50 * (strlen(pessoa) -1)) printf("pessoa\n");
        else if(cont == strlen(pessoa) -1) printf("chefe\n");
        else printf("ultron\n");
    }
}