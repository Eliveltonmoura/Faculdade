#include<stdio.h>

int main() {
    
    char frase1[102], frase2[102];
    int i, j, cont = 0, encontrou;
    
    fgets(frase1, sizeof(frase1), stdin);
    fgets(frase2, sizeof(frase2), stdin);
    
    for(i = 0; frase1[i] != '\n'; i++) {
    
        encontrou = 1;
    
        for(j = 0; frase2[j] != '\n'; j++) {
    
            if(frase1[i+j] == '\n' || frase1[i+j] != frase2[j]) {
                encontrou = 0;
                break;
            }
        }
        if(encontrou) cont++;
    }
    printf("%d", cont);
}