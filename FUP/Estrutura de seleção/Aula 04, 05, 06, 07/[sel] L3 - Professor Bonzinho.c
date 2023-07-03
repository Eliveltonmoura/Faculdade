#include<stdio.h>

int main() {
    
    float nt1, nt2, nt3, trab, media;
    
    scanf("%f\n", & nt1);
    scanf("%f\n", & nt2);
    scanf("%f\n", & nt3);
    scanf("%f", & trab);
    
    if(nt1 < nt2 && nt2 < nt3) {
        media = (trab + nt3 + nt2)/3;
            if(media >= 7) printf("aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("reprovado com %.1f", media);
    }
    
    else if(nt2 < nt1 && nt2 < nt3) {
        media = (trab + nt3 + nt1)/3;
            if(media >= 7) printf("aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("reprovado com %.1f", media);
    }
    
    else if(nt3 < nt1 && nt3 < nt2) {
        media = (trab + nt2 + nt1)/3;
            if(media >= 7) printf("Aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("Reprovado com %.1f", media);
    }
    
    else if(nt1 == nt2 && nt2 == nt3) {
        media = (trab + nt1 + nt2)/3;
            if(media >= 7) printf("Aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("Reprovado com %.1f", media);
    }
    
    else if(nt1 < nt2 && nt1 == nt3) {
        media = (trab + nt3 + nt2)/3;
            if(media >= 7) printf("aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("reprovado com %.1f", media);
    }
    
    else if(nt2 < nt1 && nt2 == nt3) {
        media = (trab + nt1 + nt2)/3;
            if(media >= 7) printf("aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("reprovado com %.1f", media);
    }
    
    else if(nt2 < nt3 && nt1 == nt2) {
        media = (trab + nt3 + nt2)/3;
            if(media >= 7) printf("aprovado com %.1f", media);
            else if(media > 4 && media <= 7) printf("Final com %.1f", media);
            else printf("reprovado com %.1f", media);
    }
    
    return(0);
    
}