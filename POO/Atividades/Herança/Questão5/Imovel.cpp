#include <iostream>
using namespace std;
#include "Imovel.h"
void Imovel::setEndereco()
{
    cout << "Endereço:" << endl;
    getline(cin, endereco);
}
void Imovel::setBairro()
{
    cout << "Bairro:" << endl;
    getline(cin, bairro);
}
void Imovel::setAreaUtil()
{
    cout << "Área Útil:" << endl;
    cin >> areaUtil;
}
void Imovel::setAreaTotal()
{
    cout << "Área Total: " << endl;
    cin >> areaTotal;
}
void Imovel::setQuartos()
{
    cout << "Número de Quartos: " << endl;
    cin >> quartos;
}
void Imovel::print()
{
    cout << "Endereço: "
         << endereco << endl
         << "Bairro: " << bairro
         << endl
         << "Área Útil: " << areaUtil
         << endl
         << "Área Total: " << areaTotal
         << endl
         << "Quartos: " << quartos
         << endl;
}