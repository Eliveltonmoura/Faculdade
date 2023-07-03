#include<stdio.h>
#include<string.h>

int main() {
    
    int i, ini, tam;
    char texto[102];
    
    fgets(texto, sizeof(texto), stdin);
    
    scanf("%d", & ini);
    scanf("%d", & tam);
    
    for(i = 0; texto[i] != '\n'; i++) {
        if((i >= ini) && (i < ini + tam)) 
            printf("%c", texto[i]);
    }
}