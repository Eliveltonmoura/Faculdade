#include<stdio.h>

int main() {
    
    int i, j, encontrou;
    char frase[102], chute[28], ca_marcacao;
    
    fgets(frase, sizeof(frase), stdin);
    fgets(chute, sizeof(chute), stdin);
    scanf("%c", & ca_marcacao); // caractere que vai substituir as letras acertadas
    
    for(i = 0; frase[i] != '\n'; i++) {
        
        if((frase[i] >='a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) {
            encontrou = 0;

            for(j = 0; chute[j] != '\n'; j++) {
            
                if(frase[i] == chute[j] || frase[i] + 32 == chute[j])
                    encontrou = 1;
            
            }
            
            if(!encontrou) frase[i] = ca_marcacao;
        }
        printf("%c", frase[i]);
    }
}