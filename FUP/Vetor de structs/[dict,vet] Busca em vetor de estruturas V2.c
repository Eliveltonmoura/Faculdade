#include<stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float media;
} aluno;

int main() {
    int i, qtd;
    
    scanf("%d", &qtd);
    aluno n[qtd];
    
    for(i = 0; i < qtd; i++) {
        scanf("%d\n", & n[i].matricula);
        fgets(n[i].nome, sizeof(n[i].nome), stdin);
        scanf("%f", & n[i].media);
    }
    
    aluno maior = n[0]; // eh o aluno da primeira posicao do vetor
    for(i = 1; i < qtd; i++) {
        if(n[i].media > maior.media) // verifica se o segundo aluno tem media maior que a do primeiro e assim por diante
            maior = n[i];
    }
    
    printf("%d\n", maior.matricula);
    printf("%s", maior.nome); // não colocar \n aqui, pois já existe o \n do fgets
    printf("%.1f", maior.media);
}