#include<iostream>
#include<string>

using namespace std;

struct REG_ALUNO {
     string nome;	// campo
     string disciplina;
     int matricula;
     float nota;
};

void leitura(REG_ALUNO &aluno) {
	cout << "Digite o nome do aluno: ";
        cin >> aluno.nome;
	cout << "Digite a disciplina: ";
        cin >> aluno.disciplina;
	cout << "Digite o número de matrícula: ";
        cin >> aluno.matricula;
	cout << "Digite a nota: ";
        cin >> aluno.nota;
        cout << endl;
}

int main() {
     REG_ALUNO aluno1, aluno2;

     leitura(aluno1);
     leitura(aluno2);
     cout << "Nome do primeiro aluno = " << aluno1.nome << endl;
     cout << "Nota do segundo aluno = " << aluno2.nota << endl;

     return 0;
}












