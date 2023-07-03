#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
class Telefone
{
    friend ostream &operator<<(ostream &,const Telefone &);
    friend istream &operator>>(istream &, Telefone &);
private:
      string DDD;
      string inicio;
      string fim;    
public:
     void operator*(Telefone);
   
};


