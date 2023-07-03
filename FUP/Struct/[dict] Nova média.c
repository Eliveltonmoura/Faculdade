#include<stdio.h>
#include<string.h>

typedef struct {
    
    char nome[102];
    float nota[3];
    
} registro_aluno;

registro_aluno ler_aluno() {
    
    int i;
    registro_aluno a;
    
    fgets(a.nome, sizeof(a.nome), stdin);
    for(i = 0; i < 3; i++) {
        scanf("%f", & a.nota[i]);
    }
    return a;
}

float notas(registro_aluno a) {
    
    int i;
    float media = 0;
    
    for(i = 0; i < 3; i++) {
        media += a.nota[i];
    }
    
    return media/3.0;
}

int main() {
    
    registro_aluno a = ler_aluno(); // crio um struct qualquer para receber a leitura, 'a' no caso
    printf("%.1f", notas(a)); // coloco a função criada que gerou dados e passo como parametro a struct criada na main
    
}