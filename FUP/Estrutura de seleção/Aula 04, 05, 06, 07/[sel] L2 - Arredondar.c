#include<stdio.h>
#include<math.h>

int main() {
    
    char charac;
    float arr;
    
    scanf("%c", & charac);
    scanf("%f", & arr);
    
    if(charac == 'r') {
        printf("%.f", round(arr));
        
    }
    else if(charac == 'f') {
        printf("%.f", floor(arr));
    }
    else if(charac == 'c') {
        printf("%.f", ceil(arr));
    }
    
    return (0);
    
}