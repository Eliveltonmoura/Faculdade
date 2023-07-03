#include <stdio.h>
#include <string.h>

typedef struct {
   int matricula;
   char nome[50];
   float media;
} aluno;

void alunos_para_arquivo(aluno turma[], int n) {
    
    FILE *f = fopen("alunos.txt", "a");
    if(f == 0) {
        printf("Erro: Não foi possível abrir o arquivo.");
        return;
    }
    
    int i;
    
    for(i = 0; i < n; i++) {
        fprintf(f, "%d\n%s\n%.f\n", turma[i].matricula, turma[i].nome, turma[i].media);
    }
    fclose(f);
}

void imprime_alunos_arquivo() {
    
    FILE *f = fopen("alunos.txt", "r");
    if(f == 0) {
        printf("Erro: Não foi possível abrir o arquivo.");
        return;
    }
    
    aluno a;
    while(fscanf(f, "%d\n", &a.matricula) == 1) { 
        fgets(a.nome, sizeof(a.nome), f);
        a.nome[strlen(a.nome)-1] = 0;
        fscanf(f, "%f", &a.media);
        printf("%s\n", a.nome);
    }
    fclose(f);
}

int main() {
    
   int n, i;
   scanf("%d\n", &n);
   aluno turma[n];

   for (i = 0; i < n; i++) {
      scanf("%d\n", &turma[i].matricula);
      fgets(turma[i].nome, sizeof(turma[i].nome), stdin);
      turma[i].nome[strlen(turma[i].nome)-1] = 0;
      scanf("%f\n", &turma[i].media);
   }
   alunos_para_arquivo(turma, n);
   imprime_alunos_arquivo();
  
   return 0;
}
