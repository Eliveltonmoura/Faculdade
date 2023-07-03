#include <iostream>
using namespace std;
#include "Cadastro.h"

void Cadastro::setNome()
{
    cout << "Nome: " << endl;
    getline(cin, nome);
}
void Cadastro::setFone()
{
    cout << "Telefone: " << endl;
    getline(cin, fone);
}

void Cadastro::print()
{
    cout << "Nome: " << nome << endl
         << "Telefone: " << fone
         << endl;
}