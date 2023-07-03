#include<stdio.h>

int main() {
    
    float aps1, aps2, aps3, premio, TtlAposta, ganho1, ganho2, ganho3;
    
    printf("Quanto deseja apostar hoje, senhor Baiao? \n");
    scanf("%f", & aps1); 
    printf("Quanto deseja apostar hoje, senhor Suco? \n");
    scanf("%f", & aps2);
    printf("Quanto deseja apostar hoje, senhor Uvula? \n");
    scanf("%f", & aps3);
    printf("O premio do Sertao da Sorte eh de: \n");
    scanf("%f", & premio);
    
    TtlAposta = aps1 + aps2 + aps3; // soma do total dos trêss apostadores para poder fazer a divisC#o
    
    ganho1 = (aps1 * premio)/TtlAposta; // multiplica o valor apostado vezes o prêmio e divide pelo total apostado pelos três
    ganho2 = (aps2 * premio)/TtlAposta;
    ganho3 = (aps3 * premio)/TtlAposta;
    
    printf("O senhor Baiao viadao ganhou: ");
    printf("%.2f\n", ganho1);
    printf("O senhor Suco de maracuja ganhou: ");
    printf("%.2f\n", ganho2);
    printf("O(A) senhor(a) Uvula ganhou: ");
    printf("%.2f", ganho3);
    
    return(0);
}
