#include<stdio.h>
#include<math.h>
 
 int main() {
     
    float Xa, Xb, Ya, Yb, PontoX, PontoY, Xes, Yes, raiz;
    
    printf("Insira os 4 pontos cartesianos desejados:\n");
     
    scanf("%f\n", & Xa); // inserindo o ponto x 
    scanf("%f\n", & Ya); // e y
    scanf("%f\n", & Xb); // x
    scanf("%f", & Yb); // e y
	
	printf("Subtra��o do ponto Xb - Xa\n");
	
	PontoX = Xb - Xa; // subtra��o dos pontos
	PontoY = Yb - Ya;
	
	printf("%f\n", PontoX);
	printf("%f\n", PontoY);
	
	printf("Pontos elevados � segunda pot�ncia\n");
	
	Xes = pow(PontoX,2); // eleva��o por 2 dos resultado da subtra��o de cada ponto
	Yes = pow(PontoY,2);
	
	printf("%f\n", Xes);
	printf("%f\n", Yes);
	
	printf("Soma dos resultados de X e Y\n");
	
	raiz = Xes + Yes; // soma dos resultados elevados
	
	printf("%f\n", raiz);
	
	printf("Raiz quadrada:\n");
	
	printf("%f", sqrt(raiz)); // tirando a raiz quadrada do resultado da soma e mostrando a raiz
	
	return(0);
}
