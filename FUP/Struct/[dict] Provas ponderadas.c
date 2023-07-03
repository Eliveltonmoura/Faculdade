#include<stdio.h>
#include<string.h>

typedef struct {
    int qtd;
    float nota[100], peso[100];
} prova;

int main() {

    int i, qtd;

    scanf("%d", & qtd);
    prova p[qtd];
    
    for(i = 0; i < qtd; i++) 
        scanf("%f", & p[i].nota[i]);
    
    for(i = 0; i < qtd; i++) 
        scanf("%f", & p[i].peso[i]);
    
    // Total do peso
    float soma_peso = 0;
    for(i = 0; i < qtd; i++) 
        soma_peso += p[i].peso[i];
    
    // Multiplicando o peso i vezes a nota i
    float soma_ponderada = 0;
    for(i = 0; i < qtd; i++)
        soma_ponderada += p[i].peso[i] * p[i].nota[i];
    // Divide-se o total da soma das multiplicações pela soma do peso
    printf("%.2f", soma_ponderada/soma_peso);
}