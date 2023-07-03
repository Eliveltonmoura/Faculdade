#include<stdio.h>

int main() {
    int segundos;
    
    scanf("%d", & segundos);
    
    printf("%d\n", segundos/3600); // horas
    
    segundos = segundos % 3600; // agora, o que eram horas passam a ser minutos
    
    printf("%d\n", segundos/60); // minutos
    
    segundos = segundos % 60;
    
    printf("%d", segundos % 60); // segundos
    
    return(0);
    
}

segundos=tempo%60;
minutos_aux=tempo/60;
minutos=minutos_aux%60;
horas=minutos_aux/60;
