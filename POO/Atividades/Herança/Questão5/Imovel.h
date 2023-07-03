#include<iostream>
#include <string>
using namespace std;
class Imovel
{
private:
    string endereco, bairro;
    float areaUtil, areaTotal;
    int quartos=0;

public:
    void setEndereco();
    void setBairro();
    void setAreaUtil();
    void setAreaTotal();
    void setQuartos();
    void print();
};
