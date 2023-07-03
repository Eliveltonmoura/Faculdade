#include <iostream>
using namespace std;

#include "Venda.h"

void Venda::set()
{
    cout << "Proprietário:" << endl;
    Cadastro::setNome();
    Cadastro::setFone();
    cout << "Imóvel:" << endl;
    Imovel::setEndereco();
    Imovel::setBairro();
    Imovel::setAreaUtil();
    Imovel::setAreaTotal();
    Imovel::setQuartos();
    Tipo::setTipoImovel();

    cout << "Valor de Venda:" << endl;
    cin >> valor;
    cin.ignore(10, '\n');
}

void Venda::print()

{

    cout << "-----------------------" << endl;
    cout << "-----------------------" << endl;
    cout << "Proprietário:" << endl;
    Cadastro::print();
    cout << "Imóvel: " << endl;
    Imovel::print();
    cout << "Valor: $" << valor << endl;
    cout << "-----------------------" << endl;
    cout << "-----------------------" << endl;
}