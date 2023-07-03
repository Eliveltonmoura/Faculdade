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

void passou_reprovou(registro_aluno a) {
    
    a.nome[strlen(a.nome)-1] = '\0'; // remove o '\n'
    a.disciplina[strlen(a.disciplina)-1] = '\0';
    
    if(a.nota >= 7) 
        printf("%s aprovado(a) em %s", a.nome, a.disciplina);
    else
        printf("%s reprovado(a) em %s", a.nome, a.disciplina);
    
}

int main() {
    
    registro_aluno dados = ler_aluno(); // crio a variavel dados pra receber a função
    passou_reprovou(dados); // passo a variavel dados para a função passou_reprovou
    
}