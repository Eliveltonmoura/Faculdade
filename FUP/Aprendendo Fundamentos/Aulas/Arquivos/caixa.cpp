#include "estoque.h"
#include<stdlib.h>    // Biblioteca de C para usar as funções system e exit

int main() {
   char nome_arq[30];

   cout << "Digite o nome do arquivo: ";
   cin >> nome_arq;
   //escrever(nome_arq);
   system("clear");   // No Windows: system("cls")
   if(!imprimir(nome_arq))
	exit(1);   

   return 0;
}




























































