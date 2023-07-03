#include <iostream>
#include <string>
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
       // b = privado; // erro: não acessivel
        c = publico=1;
    }
};

/*class Derivada2 private Base
{
private:
    int a, b, c;

public:
    Derivada2()
    {
        a = protegido;
        //b = private; // erro;Não acessivel
        c = publico;
    }
};*/
class Dericada3 : protected Base
{
private:
    int a, b, c;

public:
    Dericada3()
    {
        a = protegido;
       // b = private; // erro;Não acessivel
        c = publico;
    }
};

int main()
{
    int x;
    Derivada1 HPublica;

   // x = HPublica.protegido; // Erro: Não acessível

    //x = HPublica.privado; // Erro: Não acessível

    x = HPublica.publico; // OK
    cout<<"Ok"<<endl;
    //Derivada2 HPrivada;

    //x = HPrivada.protegido; // Erro: Não acessível

    //x = HPrivada.privado; // Erro: Não acessível

    ///x = HPrivada.publico; // Erro: Não acessível
    //Derivada3 HProtegida;

    //x = HProtegida.protegido; // Erro: Não acessível

    //x = HProtegida.privado; // Erro: Não acessível

   // x = HProtegida.publico; // Erro: Não acessível
  
    return 0;
}