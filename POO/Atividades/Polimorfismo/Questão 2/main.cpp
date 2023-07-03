#include <iostream>
#include <iomanip>

using namespace std;

class Base
{
protected:
    int protegido;

private:
    int privado;

public:
    int publico;
};

class Derivada1 : public Base
{
private:
    int a, b, c;

public:
    Derivada1()
    {
        a = protegido;
        // b = privado; //ERRO: Não acessível
        c = publico;
    }
};

class Derivada2 : private Base
{
private:
    int a, b, c;

public:
    Derivada2()
    {
        a = protegido;
        //  b = privado; //ERRO: Não acessível
        c = publico;
    }
};

class Derivada3 : protected Base
{
private:
    int a, b, c;

public:
    Derivada3()
    {
        a = protegido;
        // b = privado; //ERRO: Não acessível
        c = publico;
    }
};
//------------------------------------------------------------

int main()
{
    int x;
    Derivada1 HPublica;

    cout << "x = HPublica.protegido "
         << "="
         << "ERRO: Nao acessivel" << endl;
    cout << "x = HPublica.privado "
         << ""
         << "ERRO: Nao acessivel" << endl;

    cout << "x = HPublica.publico   "
         << "="
         << " Ok " << endl;

    Derivada2 HPrivada;
    cout << "x = HPrivada.protegido  "
         << "="
         << " ERRO: Nao acessivel   " << endl;
    //
    cout
        << "x = HPrivada.privado  "
        << "="
        << "ERRO: Nao acessivel   "
        << endl;
    //
    cout
        << "x = HPrivada.publico   "
        << "="
        << "ERRO: Nao acessivel   "
        << endl;

    Derivada3 HProtegida;
    cout << "x = HProtegida.protegido   "
         << "="
         << "ERRO: Nao acessivel  " << endl;
    //
    cout
        << "x = HProtegida.privado  "
        << "="
        << "ERRO: Nao acessivel  "
        << endl;
    //
    cout
        << "x = HProtegida.publico  "
        << "="
        << "ERRO: Nao acessivel  "
        << endl;

    return 0;
}
