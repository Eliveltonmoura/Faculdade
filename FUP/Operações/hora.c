#include<stdio.h>

int main() {
    
    int ano, mes, dia, hora, minuto;
    
    scanf("%d\n", & hora);
    scanf("%d", & minuto);
    scanf("%d", & ano);
    
    ano = ano % 100;
    
    if(hora > 11){
    	hora = hora % 2;
	}
    printf("%02d:%02d", hora, minuto);
    
    
    
    
    
    return 0;
}
