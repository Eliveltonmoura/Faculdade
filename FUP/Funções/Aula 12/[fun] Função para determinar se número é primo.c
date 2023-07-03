#include<stdio.h>

int primo(int N) {
    
    for(int i = 2; i < N; i++) {
        
        if(N % i == 0) return 0;
        
    }
    
    return 1;
    
}

int main() {
    
    int a, b;
    
    scanf("%d\n", & a);
    scanf("%d", & b);

    for(int i = a; i <= b; i++) {
        
        if(primo(i)) printf("%d\n", i);
        
    }
    
}