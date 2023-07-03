#include<stdio.h>
#include<string.h>

typedef struct {
    
    char nome[102], disciplina[102];
    int matricula;
    double nota;
    
} registro_aluno;

registro_aluno ler_aluno() {
    registro_aluno a; // variavel a só existe nesta função
    
    fgets(a.nome, sizeof(a.nome), stdin);
    scanf("%d\n", & a.matricula);
    fgets(a.disciplina, sizeof(a.disciplina), stdin);
    scanf("%lf\n", & a.nota);
    
    return a;
}

void imprime_aluno(registro_aluno a) {
    
    printf("Nome = %s", a.nome);
    printf("Matrícula = %d\n", a.matricula);
    printf("Disciplina = %s", a.disciplina);
    printf("Nota = %.1lf", a.nota);
    
}

int main() {
    
    registro_aluno novo = ler_aluno();    
    imprime_aluno(novo);
    
}