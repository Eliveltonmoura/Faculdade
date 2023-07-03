#include<stdio.h>

int main() {
    
    char letra, min, mai;
    
    scanf("%c", & letra);
    
    if(letra > 64 && letra < 91) { // 97 é o limite inferior das letras minusculas na tabela, ou seja, antes disso teremos as letras maiusculas
        mai = letra + 32; // letra vai receber 32 para virar minuscula
        printf("%c", mai);
    }
    else if(letra >= 97 && letra < 123) { // condição para se as letras forem minusculas, o retorno ser maiusculo
        min = letra - 32;
        printf("%c", min);
    }
    else 
        printf("%c", letra);
    
}