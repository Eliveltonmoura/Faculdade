#include<stdio.h>

int main() {
    
    int r1, r2, r3;
    
    scanf("%d", & r1);
    scanf("%d", & r2);
    scanf("%d", & r3);
    
    if(r1 > r2 && r2 > r3) printf("G M P");
    else if(r1 > r3 && r2 < r3) printf("G P M");
    else if(r1 < r2 && r1 > r3) printf("M G P");
    else if(r1 > r2 && r3 > r1) printf("M P G");
    else if(r1 < r2 && r2 < r3) printf("P M G");
    else if(r1 < r3 && r2 > r3) printf("P G M");
    
    return(0);
    
}