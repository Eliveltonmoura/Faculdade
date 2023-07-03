#include<iostream>
#include<string>

using namespace std;

// EXERCICIOS
/*
1- Desenvolver um programa que leia 3 strings do usuario, imprima o tamanho do maior delas e o resultado da concatenacao delas

2- Receber 3 strings e imprimi-las em ordem lexicografica (ordem do dicionario)

3- Procurar uma substring em uma dada string usando a funcao substr
*/

int main() {
  	// Funções
	string nome,nome2;
	int found;
	found = nome.find_first_of("o"); // Acha a posicao da primeira ocorrencia da letra o e retornar
	found = nome.find_last_of("o"); // Acha a posicao da ultima ocorrencia da letra o e retornar
	nome.size(); // Retorna o tamanho da string nome
	nome.empty(); // Se retornar TRUE eh porque a string esta vazia
	nome.swap(nome2); // Troca os valores das strings nome e nome2
	nome > nome2 // Comparacao de strings eh normal
	nome.erase(pos,quantidade) // apaga a partir da posicao pos quantidade de caracteres
	nome.substr(pos,tamanho) // retorna a substring que comeca em pos e tem tamanho = tamanho
		
	return 0;
}


