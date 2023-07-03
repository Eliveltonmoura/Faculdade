
#include<iostream>
#include<string>

using namespace std;

int soma(int n1, int n2) {
	int resultado;
	
	resultado = n1+n2;
	return resultado;
}

int main() {
     int n1,n2,resultado;

     cout << "Digite dois valores inteiros: " << endl;
     cin >> n1 >> n2;

     resultado = soma(n1,n2);
     cout << "O resultado da soma é: " << resultado << endl;

     resultado = soma(5,10);
     cout << "O resultado de outra soma é: " << resultado << endl;

     return 0;
}











