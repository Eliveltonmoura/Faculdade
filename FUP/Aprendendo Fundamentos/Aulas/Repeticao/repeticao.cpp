
#include<iostream>
#include<string>

using namespace std;

int calcular_soma(int qtd) {
     int soma, cont, x;     

     for(cont=0,soma=0; cont<qtd ; cont++) {  // usando comando for
	cout << "Digite um valor inteiro: ";
        cin >> x;
        soma = soma + x;
     }

     /*soma = 0;             // usando comando while
     cont = 0; // instrução de preparação
     while(cont < qtd) {
	cout << "Digite um valor inteiro: ";          
	cin >> x;
	soma = soma + x;
	cont++; // cont = cont +1 (Passo)
     }*/

     return soma;
}

int main() {
     int qtd,soma;

     cout << "Digite a quantidade de valores a serem lidos: ";
     cin >> qtd;

     soma = calcular_soma(qtd);

     cout << "A soma é: " << soma << endl;

     return 0;
}











