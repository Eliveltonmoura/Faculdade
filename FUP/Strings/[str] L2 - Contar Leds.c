#include<stdio.h>

int main() {
    
    int qtd, i, j, soma = 0;
    char display[102];
    
    scanf("%d\n", & qtd);
    
    for(j = 0; j < qtd; j++) {
        fgets(display, sizeof(display), stdin);
        soma = 0;
        for(i = 0; display[i] != 0; i++) {
            
            switch(display[i]) {
            
                case '1': soma += 2;
                    break;
                case '2': soma += 5;
                    break;
                case '3': soma += 5;
                    break;
                case '4': soma += 4;
                    break;
                case '5': soma += 5;
                    break;
                case '6': soma += 6;
                    break;
                case '7': soma += 3;
                    break;
                case '8': soma += 7;
                    break;
                case '9': soma += 6;
                    break;
                case '0': soma += 6;
                    break;
                    
            }
        
        }
        printf("%d leds\n", soma);
    }
}