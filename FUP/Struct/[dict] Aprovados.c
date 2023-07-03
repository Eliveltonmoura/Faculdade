#include<stdio.h>
#include<string.h>

typedef struct {
  
  char nome[102];
  double nota[3];
    
} registro_aluno;

registro_aluno ler_aluno() {
    
    int i;
    registro_aluno a;
    
    fgets(a.nome, sizeof(a.nome), stdin);
    
    for(i = 0; i < 3; i++) {
        
        scanf("%lf\n", & a.nota[i]);
    }
    return a;
}

void soma_nota(registro_aluno a1, registro_aluno a2, registro_aluno a3) {
    
    a1.nome[strlen(a1.nome)-1] = '\0';
    a2.nome[strlen(a2.nome)-1] = '\0';
    a3.nome[strlen(a3.nome)-1] = '\0';
    
    int i;
    double som1 = 0, som2 = 0, som3 = 0;
    
    for(i = 0; i < 3; i++) {
        som1 += a1.nota[i];
        som2 += a2.nota[i];
        som3 += a3.nota[i];
    }
    
        if(som1/3.0 >= 7)  
            printf("%s %.2lf\n", a1.nome, som1/3.0);
        if(som2/3.0 >= 7) 
            printf("%s %.2lf\n", a2.nome, som2/3.0);
        if(som3/3.0 >= 7)  
            printf("%s %.2lf\n", a3.nome, som3/3.0);
}

int main() {
    
    registro_aluno a1 = ler_aluno();    
    registro_aluno a2 = ler_aluno();
    registro_aluno a3 = ler_aluno();
    soma_nota(a1, a2, a3);
}