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
    
    if(da1.dia == da2.dia && da1.mes == da2.mes && da1.ano == da2.ano)
        printf("Iguais");
        
    else
        printf("Diferentes");
}