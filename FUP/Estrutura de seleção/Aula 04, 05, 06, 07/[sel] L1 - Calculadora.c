#include<stdio.h>

int main() {
    
    int num1, num2;
    char op;
    
    scanf("%d\n", & num1);
    scanf("%d\n", & num2);
    scanf("%c", & op);
    
    switch(op) {
        
        case '-': printf("%d", num1 - num2);
            break;
        case '+': printf("%d", num1 + num2);
            break;
        case '*': printf("%d", num1 * num2);
            break;
        
        case '/': 
            if(num2 == 0) printf("invalida");
            else printf("%d", num1 / num2);
            break;
            
        default: printf("invalida");
        
    }
    
    return(0);
    
}