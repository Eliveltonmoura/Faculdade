#include<stdio.h>
     
int main() {
         
    int chu1, chu2, vprod, shot1, shot2;
         
    scanf("%d\n", & vprod); // valor do produto
    scanf("%d\n", & chu1); // chute do jogador 1
    scanf("%d", & chu2); // chute do jogador 2
      
    shot1 = vprod - chu1; // diminuição do chute pro produto
    shot2 = vprod - chu2;
        
    if(shot1 < 0) 
        shot1 = shot1 * -1; // tornando o número positivo
    if(shot2 < 0)
        shot2 = shot2 * -1;
    if(shot1 < shot2) printf("primeiro");
    else if(shot1 > shot2) printf("segundo");
        
    else printf("empate");
       
	return(0);
     
}
