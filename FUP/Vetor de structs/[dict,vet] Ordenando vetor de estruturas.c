#include<stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float media;
} aluno;

int main() {
    int i, j, qtd;
    
    scanf("%d", &qtd);
    aluno n[qtd];
    
    for(i = 0; i < qtd; i++) {
        scanf("%d\n", & n[i].matricula);
        fgets(n[i].nome, sizeof(n[i].nome), stdin);
        scanf("%f", & n[i].media);
    }
    
    aluno aux;
    for(i = 0; i < qtd; i++) {
        for(j = 0; j < qtd - 1; j++) { // -1 para não invadir memoria
            if(n[j+1].media < n[j]. media) {
                aux = n[j+1];
                n[j+1] = n[j];
                n[j] = aux;
            }
        }
    }
    
    for(i = 0; i < qtd; i++) {
        printf("%d\n", n[i].matricula);    
        printf("%s", n[i].nome);
        printf("%.1f\n", n[i].media);
    }
}