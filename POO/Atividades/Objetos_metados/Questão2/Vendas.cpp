//Questão2
#include <iostream>
using namespace std;

class Vendas
{
public:
    void setValor(float preca);
    void setPecas(int quantidade);
    float getValor();
    int getPecas();
    Vendas tataliza(Vendas v[], int n);

private:
    float valor;
    int pecas;
};

void Vendas::setValor(float preca)
{
    valor = preca;
}
void Vendas::setPecas(int quantidade)
{
    pecas = quantidade;
}
float Vendas::getValor()
{
    return valor;
}
int Vendas::getPecas()
{
    return pecas;
}
Vendas Vendas::tataliza(Vendas v[], int n)
{
    int i;
    Vendas temp;
    temp.valor = 0;
    temp.pecas = 0;
    for (i = 0; i < n; i++)
    {
        temp.valor += v[i].getValor();
        temp.pecas += v[i].getPecas();
    }

    return temp;
}

int main(int argc, char const *argv[])
{
    Vendas total, v[5];
    v[0].setPecas(1);
    v[1].setPecas(2);
    v[2].setPecas(3);
    v[3].setPecas(4);
    v[4].setPecas(5);
    v[0].setValor(1.0);
    v[1].setValor(2.0);
    v[2].setValor(3.0);
    v[3].setValor(4.0);
    v[4].setValor(5.0);
     total = v[0].tataliza(v,5);
    cout << total.getPecas() 
         << endl
         << total.getValor();
    return 0;
}
