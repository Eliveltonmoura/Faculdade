#include<stdio.h>

int main() {
    
    int hrdor, mindor, segdor, hracr, minacr, segacr, h, m, s;
    
    scanf("%d", & hrdor); // hora de dormir
    scanf("%d", & mindor); // minuto de dormir
    scanf("%d", & segdor); // segundo de dormir
    scanf("%d", & hracr); // hora de acordar
    scanf("%d", & minacr); // minuto de acordar
    scanf("%d", & segacr); // segundo de acordar
    
    
    if(segdor <= segacr) {
        s = segacr - segdor;
        
    }
    
    if(segdor > segacr) {
        s = segacr + (60 - segdor);
        minacr--;
                        
    }

    if(mindor <= minacr) {
            m = minacr - mindor;
           
    } 
    if(mindor > minacr) {
        m = minacr + (60 - mindor);
        hracr--;
        
    }
    
    if (hrdor <= hracr) {
        h = hracr - hrdor;   
    } 
    
    if (hrdor > hracr) {
        h = (hracr + 24) - hrdor; 
    }
    
    printf("%d %d %d", h, m, s);
    
    
    return(0);
    
}