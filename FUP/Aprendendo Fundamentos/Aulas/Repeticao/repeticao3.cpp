#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

int maior_menor(int qtd, int &men) {
	int cont=1,x,maior;
	
	cout << "Digite um novo valor: ";
	cin >> x;
        maior = x;
	men = x;

	while(cont < qtd) {
		cout << "Digite um novo valor: ";
		cin >> x;
		if(x > maior) maior =x;
		if(x < men) men =x;	

		cont++;
	}
	return maior;
}

int main() {
     int qtd,menor,maior;

     cout << "Digite a quantidade de valores a serem lidos: ";
     cin >> qtd;

     maior = maior_menor(qtd,menor);

     cout << "Maior = " << maior << " e Menor = " << menor << endl;

     return 0;
}






