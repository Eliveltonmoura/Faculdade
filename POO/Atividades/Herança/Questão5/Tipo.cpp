#include <iostream>
using namespace std;
#include "Tipo.h"
void Tipo::setTipoImovel()
{
    cout << "Tipo do Imóvel:" << endl;
    getline(cin, tipoImovel);
    cin.ignore(10, '\n');
}
void Tipo::print()
{
    cout << "Tipo do Imóvel: "
         << tipoImovel << endl;
}