#include<iostream>
#include<string>

using namespace std;

enum MES{JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};

void semestre(MES var_mes) {
	if(var_mes <= JUNHO)
	    cout << "Primeiro semestre!" << endl;
	else
	    cout << "Segundo semestre!" << endl;
}

int main() {
     int var_int;
     MES var_mes;

     cout << "Digite o número do mês: " << endl;
     cin >> var_int;
     var_mes = (MES) var_int;
     semestre(var_mes);

     /* TESTE
     cout << DEZEMBRO+JANEIRO << endl;
     var_mes = (MES) (DEZEMBRO+JANEIRO);
     cout << var_mes << endl;
     */ 

     return 0;
}






