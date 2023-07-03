#include<stdio.h>
#include<string.h>

int main() {
    
    int n, i, j, ini, fim, maior_ini, maior_fim;
    char letras[102];
    
    scanf("%d\n", & n);
    
    for(i = 1; i <= n; i++) {
        ini = 0, maior_ini = 0, maior_fim = 0;
        fgets(letras, sizeof(letras), stdin);
        
        for(fim = 0; letras[fim] != 0; fim++) {
            
            if((letras[fim] != 'a') && (letras[fim] != 'e') && (letras[fim] != 'i') && (letras[fim] != 'o') && (letras[fim] != 'u')) {
                if(fim - ini > maior_fim - maior_ini) {
                    maior_ini = ini;
                    maior_fim = fim;
                }
                ini = fim + 1;
            }
        }
        
        for(j = maior_ini; j < maior_fim; j++) {
            printf("%c", letras[j]);
        }
        printf("\n");
    }
}