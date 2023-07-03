#include<stdio.h>
#include<string.h>

int main() {
    
    int i, j, n1, n2;
    char materia[100], anti_materia[100];
    
    scanf("%s", materia);
    scanf("%s", anti_materia);
    
    n1 = strlen(materia);
    n2 = strlen(anti_materia);
    
    for(i = 0; i < n2; i++) {
        
        if(n1-1-i < 0 || materia[n1-1-i] != anti_materia[i]) break;
            materia[n1-1-i] = '#';
            anti_materia[i] = '#';
    }
        
    for(i = 0; i < n1; i++) {
        if(materia[i] != '#')
            printf("%c", materia[i]);
    }
    
    for(i = 0; i < n2; i++) {
        if(anti_materia[i] != '#')
            printf("%c", anti_materia[i]);
    }
        
}