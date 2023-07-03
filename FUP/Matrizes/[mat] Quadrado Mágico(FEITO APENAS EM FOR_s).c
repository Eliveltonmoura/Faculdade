#include<stdio.h>

int main() {
    
    int i, j, m[3][3];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", & m[i][j]);
        }
    }
    int diagonal = 0, subdiagonal = 0, col1 = 0, col2 = 0, col3 = 0, lin1 = 0, lin2 = 0, lin3 = 0;
    
    for(i = 0; i < 3; i++) {
        diagonal += m[i][i];
    }
    for(i = 0; i < 3; i++)
        subdiagonal += m[i][4-i];
        
    for(i = 0; i < 3; i++)
        for(j = 0; j < 1; j++)
            col1 += m[i][j];
            
    for(i = 0; i < 3; i++)
        for(j = 1; j < 2; j++)
            col2 += m[i][j];
            
    for(i = 0; i < 3; i++)
        for(j = 2; j < 3; j++)
            col3 += m[i][j];
            
    for(i = 0; i < 1; i++)
        for(j = 0; j < 3; j++)
            lin1 += m[i][j];
            
    for(i = 1; i < 2; i++)
        for(j = 0; j < 3; j++)
            lin2 += m[i][j];
            
    for(i = 2; i < 3; i++)
        for(j = 0; j < 3; j++)
            lin3 += m[i][j];
           
    if((diagonal != subdiagonal && diagonal != col1 && diagonal != col2)
    && (diagonal != col3 && diagonal != lin1 && diagonal !=lin2 && diagonal != lin3))
        printf("nao");
    else printf("sim");
}