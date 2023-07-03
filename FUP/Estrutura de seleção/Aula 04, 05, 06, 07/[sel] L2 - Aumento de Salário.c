#include<stdio.h>

int main() {
    
    float salario, aum;
    
    scanf("%f", & salario); // digito o salario
    
    if(salario <= 1000) { // se o salario for menor ou igual a mil
        
        salario += (salario * 20)/100; // então eu multiplico o salario por 20(%) e acrescento a divisao do resultado ao salario
        printf("%.2f", salario);
    
    }
    
    else if(salario <= 1500) { // agora com menos de 1501

        salario += (salario * 15)/100; // somo a divisão do salario vezes 15(%) com o salário
        printf("%.2f", salario);

    }

    else if(salario <= 2000) {
    
        salario += (salario * 10)/100;
        printf("%.2f", salario);
    
    }    
    
    else if(salario > 2000) {
    
        salario += (salario * 5)/100;
        printf("%.2f", salario);
    
    }
    
    return(0);
}