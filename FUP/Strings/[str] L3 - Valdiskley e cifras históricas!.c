#include<stdio.h>

int main() {
    
    int i, j, cont = 0;
    char frase[102], lptrocar[102], trocadora[102]; // lptrocar = a letra q vai ser substituida, trocadora é a substituta
    
    fgets(frase, sizeof(frase), stdin);
    fgets(lptrocar, sizeof(lptrocar), stdin);
    fgets(trocadora, sizeof(trocadora), stdin);
    
    for(i = 0; frase[i] != '\n'; i++) {
        for(j = 0; lptrocar[j] != '\n'; j++) {
            if(frase[i] == lptrocar[j]) {
                frase[i] = trocadora[j];
            }
            else if(frase[i] == trocadora[j])
                frase[i] = lptrocar[j];
        }
    }
    printf("%s", frase);
}