#include<stdio.h>

int main() {
    
    int i;
    char escolha, num[102];
    
    scanf("%c\n", & escolha);
    fgets(num, sizeof(num), stdin);
    
    int nulo = 1;
    for(i = 0; num[i] != '\n'; i++) {
        
        if(escolha != num[i]) {
            if(num[i] != '0') nulo = 0;
            if(!nulo) printf("%c", num[i]);
        }
    }
    if(nulo) printf("0");
}