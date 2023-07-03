#include<stdio.h>

int main() {
    
    int num, tel, cnt;
    
    scanf("%d", & num);
    scanf("%d", & tel);
    
    for(int i = 0; i < 8; i++) {
        
        if(num == tel % 10) cnt++;
        tel = tel/10;
    }
    
    printf("%d", cnt);
    
    return(0);
    
}