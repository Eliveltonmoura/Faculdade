#include<stdio.h>
#include<string.h>

int main() {
    
    int i;
    char frase[102], op;
    
    fgets(frase, sizeof(frase), stdin);
    scanf("%c", & op);
    
    for(i = 0; frase[i] != '\n'; i++) {
        
        if(op == 'M') { // transformar todos em letras maiusculas
            if(frase[i] >= 'a' && frase[i] <= 'z') {
                frase[i] -= 32;
            }
        }
        
        if(op == 'm') { // transformar todos em letras minusculas
            if(frase[i] >= 'A' && frase[i] <= 'Z') {
                frase[i] += 32;
            }
        }
        
        if((op == 'p') && (i == 0 || frase[i-1] == ' ')) { // primeiras letras maiusculas
            if(frase[i+1] == ' ' && frase[i] >= 'A' && frase[i] <= 'Z') frase[i] += 32;
            if(frase[i+1] != ' ' && frase[i] >= 'a' && frase[i] <= 'z') frase[i] -= 32;
        }
        
        if(op == 'i') { // inverter cases
            if(frase[i] >= 'a' && frase[i] <= 'z') frase[i] -= 32;
            else if(frase[i] >= 'A' && frase[i] <= 'Z') frase[i] += 32; // tem que ser um else if, pq quando ele entrar no primeiro if todas letras ficaram maiusculas
        }                                                               // entao vao entrar no segundo if e todas se tornariam minusculas 
    }
    printf("%s", frase);
}