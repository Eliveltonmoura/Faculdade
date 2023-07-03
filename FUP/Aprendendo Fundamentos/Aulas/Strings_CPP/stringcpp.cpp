#include<iostream>
#include<string>

using namespace std;

int main() {
	// Operacoes basicas
	string nome, sobrenome;
	nome = "Joao";
	cout << "Nome = " << nome << endl;
	sobrenome = " Almeida";
	cout << "Sobrenome = " << sobrenome << endl;
	nome = nome + sobrenome;
	cout << "Nome = " << nome << endl;
	cout << "A primeira letra = " << nome[0] << endl;

  	// Importante
	int found;
	found = nome.find_first_of("o");
	while(found != string::npos) {
		cout << "letra = " << nome[found] << endl;
		nome[found] = '*';
		found = nome.find_first_of("o");
	}
	cout << "Nome = " << nome << endl;	

	return 0;
}


