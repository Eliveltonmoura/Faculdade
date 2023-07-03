#include <iostream>

using namespace std;

int main()
{
   int i=0, x=0;
   int * p = NULL;

   p = new int;
   cout << "Endereço de P = " << &p << endl;
   cout << "Tamanho = " << sizeof(p) << endl;  // Imprime a quantidade de bytes de uma variável do tipo int *, pois p é do tipo int *
   cout << "P aponta para " << p << endl;
   cout << "Digite o valor: ";
   cin >> *p;
   cout << "Valor = " << *p << endl;
   delete p;
   p = NULL;

   return 0;
}




























































