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

void maior_menor(registro_aluno a1, registro_aluno a2) {
    
    a1.nome[strlen(a1.nome)-1] = '\0';
    a2.nome[strlen(a2.nome)-1] = '\0';
    
    if(a1.nota > a2.nota) printf("%s , %.1f", a1.nome, a1.nota);
    else if(a1.nota < a2.nota) printf("%s , %.1f", a2.nome, a2.nota);
    else printf("%s e %s , %.1f", a1.nome, a2.nome, a1.nota);
    
}

int main() {
    
    registro_aluno a1 = ler_aluno();
    registro_aluno a2 = ler_aluno();
    maior_menor(a1, a2);
}
