#include<stdio.h>

int main() {
    
    char palavra[102];
    
    while(scanf("%s", palavra) > 0) // enquanto a quantidade do scanf ultrapasse 0, a letra ou palavra separada por '\n' será printada
        printf("%s %s ", palavra, palavra);
    
}
