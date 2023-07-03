#include<stdio.h>
#include<string.h>

typedef struct {
    
    char nome[102], disciplina[102];
    int matricula;
    double nota;
    
} registro_aluno;

registro_aluno ler_aluno() {
    registro_aluno a;
    
    fgets(a.nome, sizeof(a.nome), stdin);
    scanf("%d\n", & a.matricula);
    fgets(a.disciplina, sizeof(a.disciplina), stdin);
    scanf("%lf\n", & a.nota);
    
    return a;
}

float media(registro_aluno a1, registro_aluno a2) {
    
    return (a1.nota + a2.nota) / 2.0;
    
}

int main() {
    
    registro_aluno a1 = ler_aluno();
    registro_aluno a2 = ler_aluno();
    printf("Média = %.1f", media(a1, a2));
    
}