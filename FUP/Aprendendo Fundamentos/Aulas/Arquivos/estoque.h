#include<fstream>           // Biblioteca para arquivos em C++
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

struct PRODUTO {
        int cod;
	char nome[30];
        double preco;
	int qtd;        
};


bool escrever(char *nome_arq) {
    fstream file;
    PRODUTO produto;
    
    file.open(nome_arq, ios::in | ios::out | ios::app); // Abre o arquivo referenciado pela variável "file"
    if(file.fail()) {
	cout << "Falha ao tentar abrir o arquivo!" << endl;
	return false;
    }

    cout << "Digite o código do produto: ";
    cin >> produto.cod;
    cout << "Digite o nome do produto: ";
    cin >> produto.nome;
    cout << "Digite o preço do produto: ";
    cin >> produto.preco;
    cout << "Digite a quantidade do produto: ";
    cin >> produto.qtd;
   
    file << produto.cod << ";";
    file << produto.nome << ";";
    file << produto.preco << ";";
    file << produto.qtd << "\n";
    file.close();   // Fecha o arquivo referenciado pela variável "file"
    return true;
}


bool imprimir(char *nome_arq) {
        bool ponto = false;
	double preco;
        int i=0, aux=0, cont=0;
        char linha[100];
	fstream file;
        PRODUTO produto;

        file.open(nome_arq, ios::in | ios::out); // Abre o arquivo referenciado pela variável "file"
	if(file.fail()) {
		cout << "Falha ao tentar abrir o arquivo!" << endl;
		return false;
    	}
        while(1) {
		file >> linha;
		if(file.fail()) break;	// se a última linha lida foi o caráter EOF, então o arquivo terminou!

		aux=0;
		i=0;
		cont=0;
		preco=0;
		ponto = false;
                while(linha[i] != ';') {	// leitura de um valor inteiro
                        aux = aux*10;   // aux começa com 0
			aux += linha[i] - '0';
			i++;
		}
   		produto.cod = aux;
                i++;
                while(linha[i] != ';') {	// leitura de um valor string
                        produto.nome[cont] = linha[i];
			cont++;
			i++;
		}
                produto.nome[cont] = '\0';
		i++;
		cont=0;
		while(linha[i] != ';') {	// leitura de um valor real
			if(linha[i] != '.') {
                        	preco = preco*10;   // aux começa com 0
				preco += linha[i] - '0';
				if(ponto) cont++;
			} else ponto = true;
			i++;
		}
                produto.preco = preco/pow(10,cont);
		i++;
		aux=0;
 		while(linha[i] != '\0') {      // leitura de um valor inteiro
                        aux = aux*10;   // aux começa com 0
			aux += linha[i] - '0';
			i++;
		}
   		produto.qtd = aux;

		cout << "Código: " << produto.cod << endl;
		cout << "Nome: " << produto.nome << endl;
		cout << "Preço: " << produto.preco << endl;
		cout << "Quantidade: " << produto.qtd << endl << endl;		
	}
	file.close();	// Fecha o arquivo referenciado pela variável "file"
	return true;
}







