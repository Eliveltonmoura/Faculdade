#include<iostream>
#include<string>

using namespace std;

enum PI {PAR, IMPAR};
enum JOGADOR {JOG1, JOG2};

JOGADOR par_impar(int mao_j1, int mao_j2, PI opcao_j1) {
	PI resultado;
	resultado = (PI) ((mao_j1 + mao_j2) % 2);
        if(opcao_j1 == resultado)
		return JOG1;
	else return JOG2;
}

int main() {
     int mao_j1, mao_j2, opcao_j1_int;
     PI opcao_j1;
     JOGADOR vencedor;

     cout << "Digite a opção do jogador 1: " << endl;
     cout << "0 - Par" << endl;
     cout << "1 - Ímpar" << endl;
     cin >> opcao_j1_int;
     opcao_j1 = (PI) opcao_j1_int;
     
     cout << "Digite as mãos dos jogadores: ";
     cin >> mao_j1;
     cin >> mao_j2;

     vencedor = par_impar(mao_j1, mao_j2, opcao_j1);

     switch(vencedor) {
	case JOG1: cout << "Vecendor foi o jogador 1 " << endl;
		   break;
	case JOG2: cout << "Vecendor foi o jogador 2 " << endl;
     }

     return 0;
}








