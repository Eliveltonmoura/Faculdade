#include<stdio.h>

int main() {
    
    int i, j, cont = 0, solds[3][3];
    
    for(i = 0; i < 3; i++) 
        for(j = 0; j < 3; j++) 
            scanf("%d", & solds[i][j]);
    
    for(i = 2; i >= 0; i--) {
        for(j = 2; j > 0; j--){
            if(solds[j - 1][i] > solds[j][i]){
                cont++;
            }
        }
    }
    printf("%d", cont);
}