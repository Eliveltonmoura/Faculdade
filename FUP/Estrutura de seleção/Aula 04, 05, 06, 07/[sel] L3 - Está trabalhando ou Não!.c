#include<stdio.h>

int main() {
    
    int dia, hora, min;
    
    scanf("%d\n", & dia);
    scanf("%d\n", & hora);
    scanf("%d", & min);

    if(dia == 2) {
        if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)) printf("SIM");
        else printf("NAO");
    }
    
    else if(dia == 3) {
        if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)) printf("SIM");
        else printf("NAO");
    }
    
    else if(dia == 4) {
        if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)) printf("SIM");
        else printf("NAO");
    }
    
    else if(dia == 5) {
        if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)) printf("SIM");
        else printf("NAO");
    }
    
    else if(dia == 6) {
        if((hora >= 8 && hora < 12) || (hora >= 14 && hora < 18)) printf("SIM");
        else printf("NAO");
    }
    
    else if(dia == 7) {
        if(hora >= 8 && hora < 12) printf("SIM");
        else printf("NAO");
    }
    
    else printf("NAO");
    
    return(0);
}
