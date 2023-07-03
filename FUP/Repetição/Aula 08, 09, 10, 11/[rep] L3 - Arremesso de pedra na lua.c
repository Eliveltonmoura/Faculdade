#include<stdio.h>
#include<limits.h>

int main() {
    
    int N, a, b, dis, menor = INT_MAX, winner = -1;
    
    scanf("%d", & N);
    
    for(int i = 0; i < N; i++) {
        
        scanf("%d", & a);
        scanf("%d", & b);
        
        if(a >= 10 && b >= 10) {
            dis = a - b;
            if(dis < 0) dis = - dis;
            if(dis < menor) {
                menor = dis;
                winner = i;
            }
        }
    }
    
    if(winner == -1) printf("sem ganhador");
    else printf("%d", winner);
    
    return(0);
    
}
