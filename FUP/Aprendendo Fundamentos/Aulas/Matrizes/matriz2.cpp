#include<iostream>
#include<stdlib.h>

using namespace std;

void lerMatriz(int **mat, int nlin, int ncol) {	
	for(int lin=0;lin<nlin;lin++)
		for(int col=0;col<ncol;col++) {
			cout << "Digite o elemento M[" << lin << "][" << col << "]: ";
			cin >> mat[lin][col];
		}	
}

void imprimirMatriz(int **mat, int nlin, int ncol) {
	for(int lin=0;lin<nlin;lin++) {
		for(int col=0;col<ncol;col++)
			cout << mat[lin][col] << " ";

		cout << endl;
	}	
}

int main() {
   int nlin=0,ncol=0;
   int **mat = NULL;

   cout << "Digite o número de linhas: ";
   cin >> nlin;
   cout << "Digite o número de colunas: ";
   cin >> ncol;

   // Aloca memória para o vetor de linhas e depois para o vetor de colunas para cada linha
   mat = new int*[nlin];     
   for(int i=0;i<nlin;i++)
	mat[i] = new int[ncol];	

   lerMatriz(mat,nlin,ncol);
   system("clear");
   imprimirMatriz(mat,nlin,ncol); 
    
   // Desaloca a memória de cada linha e depois do vetor de linhas
   for(int i=0;i<nlin;i++)
	delete [] mat[i];

   delete [] mat;

   return 0;
}




























































