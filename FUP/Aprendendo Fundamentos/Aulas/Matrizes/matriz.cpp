#include<iostream>
#include<stdlib.h>

using namespace std;

void lerMatriz(int mat[2][3], int nlin, int ncol) {	
	for(int lin=0;lin<nlin;lin++)
		for(int col=0;col<ncol;col++) {
			cout << "Digite o elemento M[" << lin << "][" << col << "]: ";
			cin >> mat[lin][col];
		}	
}

void imprimirMatriz(int mat[2][3], int nlin, int ncol) {
	for(int lin=0;lin<nlin;lin++) {
		for(int col=0;col<ncol;col++)
			cout << mat[lin][col] << " ";

		cout << endl;
	}	
}

int main() {
   int mat[2][3];     

   lerMatriz(mat,2,3);
   system("clear");
   imprimirMatriz(mat,2,3);

   return 0;
}




























































