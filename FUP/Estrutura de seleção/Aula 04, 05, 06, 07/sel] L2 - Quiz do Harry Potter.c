 #include<stdio.h>
    
int main() {
         
    char a, b, c, d;
    int acertos = 0;
         
    scanf("%c\n", & a);
    scanf("%c\n", & b);
    scanf("%c\n", & c);
    scanf("%c", & d);
        
    if(a == 'd')
        acertos++;
    if(b == 'a')
        acertos++;
    if(c == 'c')
        acertos++;
    if(d == 'd')
        acertos++;
            
    if(acertos == 0) printf("Nunca assistiu");
    else if(acertos == 1) printf("Ja ouviu falar");
    else if(acertos == 2) printf("Interessado no assunto");
    else if(acertos == 3) printf("Fa");
    else if(acertos == 4) printf("Super fa");
        
    return(0);
}
