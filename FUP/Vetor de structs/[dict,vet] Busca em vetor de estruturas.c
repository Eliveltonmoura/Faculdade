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
    
    int choice;
    
    scanf("%d", & choice); /// matricula que vai ser escolhida
    
    int encontrou = 0;
    for(i = 0; i < qtd; i++) {
        if(n[i].matricula == choice) {
            printf("%s", n[i].nome);
            printf("%.1f", n[i].media);
            encontrou = 1;
            break;
        }
    }
    
    if(!encontrou) printf("NAO ENCONTRADA");
    
}