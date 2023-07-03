#include <iostream>
using namespace std;

#include "Cadastro.h"
#include "Imovel.h"
#include "Tipo.h"

class Venda : private Cadastro, Imovel, Tipo
{
private:
    float valor;

public:
    void set();
    void print();
};