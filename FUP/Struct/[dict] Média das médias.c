#include<stdio.h>
#include<string.h>

typedef struct {
  
  char nome[102];
  float nota[3];
    
} registro_aluno;

registro_aluno ler_aluno() {
    
    int i;
    
    registro_aluno a;
    
    scanf("%s", a.nome);
    for(i = 0; i < 3; i++) {
        scanf("%f", & a.nota[i]);
    }
    
    return a;
}

float medias(registro_aluno a1, registro_aluno a2) {
    
    int i;
    float al1 = 0, al2 = 0, al3 = 0, al4 = 0;
    
    for(i = 0; i < 3; i++) {
        al1 += a1.nota[i];
        al2 += a2.nota[i];
    }
    
    al3 = al1/3.0;
    al4 = al2/3.0;
    
    return (al3 + al4) / 2.0;
}

int main() {
    
    registro_aluno a1 = ler_aluno();
    registro_aluno a2 = ler_aluno();
    
    printf("%.1f", medias(a1, a2));
    
}