#include<stdio.h>
#include<limits.h>

int main() {
    
    int n, i;

    scanf("%d", &n);
   
    int vetor[n];

    for (i = 0; i < n; i++)
    
        scanf("%d", & vetor[i]);
    
    for(i = n -1; i >= 0; i--) {
        
        printf("%d ", vetor[i]);
        
    }
    
    return(0);
    
}