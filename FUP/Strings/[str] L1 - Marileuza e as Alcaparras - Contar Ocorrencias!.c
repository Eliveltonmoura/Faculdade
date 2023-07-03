#include<stdio.h>

int main() {
    
    int i = 0, cont = 0;
    char texto[102], letra;
    
    fgets(texto, sizeof(texto), stdin);
    
    scanf("%c", & letra);
    
    for(i = 0; i < texto['\n']; i++) { // i percorrerá a string até chegar em texto posição \n que é o final
        
        if(letra == texto[i]) cont++;
        
    }
    
    printf("%d", cont);
    
}