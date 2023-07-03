#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
   char nome[100];
   string nomes[3];

   nomes[0] = "ALOHA ";
   nomes[1] = "LOKA";
   nomes[2] = nomes[0] + nomes[1];
   strcpy(nome, nomes[2].data() );

   cout << nomes[0] << nomes[1] << endl;
   cout << nomes[2] << endl;
   cout << nome << endl;
   

   return 0;
}




























































