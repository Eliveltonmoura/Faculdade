#include <iostream>

using namespace std;

int * aloca_vetor_int(int qtd) {
	int * p = NULL;

        p = new int[qtd];
        return p;
}

void desaloca_vetor_int(int * vet) {
     delete [] vet;
}

int main() {
   int * vet = NULL;

   vet = aloca_vetor_int(5);
   vet[0] = 2;
   vet[1] = 3;
   vet[2] = 8;
   vet[3] = 4;
   vet[4] = 10;
   desaloca_vetor_int(vet);
   vet = NULL;  
   


   return 0;
}




























































