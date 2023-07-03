#include<stdio.h>
#include<string.h>

int main() {
    
    int n1, n2;
    char jog1[15], jog2[15];
    
    fgets(jog1, sizeof(jog1), stdin);
    fgets(jog2, sizeof(jog2), stdin);
    
    if(strcmp(jog1, "rock\n")     == 0) n1 = 0;
    if(strcmp(jog1, "fire\n")     == 0) n1 = 1;
    if(strcmp(jog1, "scissors\n") == 0) n1 = 2;
    if(strcmp(jog1, "human\n")    == 0) n1 = 3;
    if(strcmp(jog1, "sponge\n")   == 0) n1 = 4;
    if(strcmp(jog1, "paper\n")    == 0) n1 = 5;
    if(strcmp(jog1, "air\n")      == 0) n1 = 6;
    if(strcmp(jog1, "water\n")    == 0) n1 = 7;
    if(strcmp(jog1, "gun\n")      == 0) n1 = 8;
    
    if(strcmp(jog2, "rock\n")     == 0) n2 = 0;
    if(strcmp(jog2, "fire\n")     == 0) n2 = 1;
    if(strcmp(jog2, "scissors\n") == 0) n2 = 2;
    if(strcmp(jog2, "human\n")    == 0) n2 = 3;
    if(strcmp(jog2, "sponge\n")   == 0) n2 = 4;
    if(strcmp(jog2, "paper\n")    == 0) n2 = 5;
    if(strcmp(jog2, "air\n")      == 0) n2 = 6;
    if(strcmp(jog2, "water\n")    == 0) n2 = 7;
    if(strcmp(jog2, "gun\n")      == 0) n2 = 8;
    
    if(n1 == n2) printf("empate");
    
    else if(n2 == (n1+1) % 9 || n2 == (n1+2) % 9 || n2 == (n1+3) % 9 || n2 == (n1+4) % 9)
       printf("jog1");
       
    else printf("jog2");
       
    return(0);
}