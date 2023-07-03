#include <iostream>
#include <string>

using namespace std;

int main()
{
   string nome = "Joao";
   //nome = "Joao";
   //cout << nome[2] << endl;
   int found = nome.find_first_of("o");
   while(found != string::npos) {
        cout << nome[found] << endl;
        nome[found]='*';
        found = nome.find_first_of("o);
   }

   return 0;
}




























































