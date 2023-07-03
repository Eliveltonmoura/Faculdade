#include<stdio.h>
#include<string.h>

typedef struct {
    
    int num1, num2;
    char op;
    
} expressao;

expressao ler_num() {
    
    expressao a;
    
    scanf("%d", & a.num1);
    scanf("%d\n", & a.num2);
    scanf("%c", & a.op);
    
    return a;
    
}

void soma(expressao a) {
    
    switch(a.op) {
        
        case '-': printf("%d", a.num1 - a.num2);
            break;
        case '+': printf("%d", a.num1 + a.num2);
            break;
        case '*': printf("%d", a.num1 * a.num2);
            break;
        case '/': printf("%d", a.num1 / a.num2);
            break;
    }
}

int main() {
    
    expressao a = ler_num();
    soma(a);
    
}