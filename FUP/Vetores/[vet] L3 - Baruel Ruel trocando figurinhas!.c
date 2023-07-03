#include<stdio.h>

int main() {
    
    int total_album, quant, encontrou, nf=0;
    encontrou = 0;
    
    scanf("%d", & total_album);
    scanf("%d", & quant);
    int figuras[quant];
    
    for(int i = 0; i < quant; i++) {
        scanf("%d", & figuras[i]);
    }
    
    for(int i = 1; i < quant; i++) {
        
       if(figuras[i] == figuras[i-1]){
            printf("%d ", figuras[i]);
            encontrou = 1;
        }
    }
    
    if(encontrou == 0) {
        printf("N");
    }
    
    printf("\n");
    
    for(int j = 1; j <= total_album; j++) {
        encontrou = 0;
        for(int i = 0; i < quant; i++) {
            if(figuras[i] == j)
                encontrou = 1;
        }
        if(encontrou == 0) {
            printf("%d ", j);
            nf = 1;
        }
    }
    
    if(nf == 0) printf("N");
    
}
