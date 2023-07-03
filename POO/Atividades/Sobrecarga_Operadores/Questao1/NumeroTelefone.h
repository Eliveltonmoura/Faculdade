#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class NumeroTelefone
{
friend ostream &operator<<(ostream &,const NumeroTelefone &);
friend istream &operator>>(istream &, NumeroTelefone &);

private:
      string DDD;
      string incio;
      string fim;     
};
