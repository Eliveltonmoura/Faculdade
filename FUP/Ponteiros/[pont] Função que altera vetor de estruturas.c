#include <stdio.h>

typedef struct {
   float nota[3];
   float media;
} aluno;

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a) {

    a -> media = (a -> nota[0] + a -> nota[1] + a -> nota[2])/3;

}

// Recebe vetor de alunos ('turma') e número de alunos ('n'), e chama a função
// 'calcula_media' (da questão anterior) para cada aluno do vetor.
// Ou seja, preenche o campo 'media' de cada aluno com a média das 3 notas do aluno.
void calcula_media_turma(aluno turma[], int n)
{
    int i;
    
    for(i = 0; i < n; i++) {
        calcula_media(&turma[i]);
    }
}

int main()
{
   int n, i, j;
   scanf("%d", &n);
   aluno turma[n];
   for (j = 0; j < n; j++)
      for (i = 0; i < 3; i++)
         scanf("%f", &turma[j].nota[i]);
   
   // Chame a função 'calcula_media_turma' passando o vetor de alunos 'turma'.
    calcula_media_turma(turma, n);
   
   for (j = 0; j < n; j++)
      printf("%.1f ", turma[j].media);
}
