#include<stdio.h>

int main() {
    
    char letra;
    int choice, i;
    
    scanf("%c", & letra);
    scanf("%d", & choice); // escolha
    
    for(i = 'a'; i <= 'z'; i++) {
        if(choice < 0) {
            
            if(letra - (-choice) < 'a') {
                letra = letra - (-choice) + 26; // se a letra dada subtraida do valor negativo for menor q 'a', soma +26 pra ficar num loop de 'a' à 'z'
                printf("%c", letra);
                break;
            }
            
            else {
                letra = letra - (-choice);
                printf("%c", letra);
                break;
            }
        }
        
        else if(choice >= 0) {
            
            if(letra + choice > 'z') {
                letra += choice - 26; // se a letra dada mais o valor positivo for maior q 'z', subtrai -26 pra ficar num loop de 'z' à 'a'
                printf("%c", letra);
                break;
            }
            
            else {
                letra += choice;
                printf("%c", letra);
                break;
            }
        }
    }
}