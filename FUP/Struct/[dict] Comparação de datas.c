#include<stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} data;

int main() {
    
    data da1, da2;
    
    scanf("%d\n%d\n%d\n", & da1.dia, & da1.mes, & da1.ano);
    scanf("%d\n%d\n%d", & da2.dia, & da2.mes, & da2.ano);
    
    if(da1.ano > da2.ano) // Verifica se o primeiro ano é mais recente ou mais antigo que o segundo ano(else if)
        printf("Mais recente");
    else if(da1.ano < da2.ano)
        printf("Mais antiga");
    else
        if(da1.mes > da2.mes) // Verifica se o primeiro mes é mais recente ou mais antigo que o segundo mes(else if)
            printf("Mais recente");
        else if(da1.mes < da2.mes)
            printf("Mais antiga");
        else
            if(da1.dia > da2.dia)  // Verifica se o primeiro dia é mais recente ou mais antigo que o segundo dia(else if)
                printf("Mais recente");
            else if(da1.dia < da2.dia)
                printf("Mais antiga");
            else
                printf("Iguais");
}