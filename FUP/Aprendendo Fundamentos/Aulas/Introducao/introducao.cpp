
#include<iostream>
#include<string>

using namespace std;

int main() {
     int x,u; // cria uma variável do tipo inteiro
     float y; // cria uma variável do tipo real
     double w; // cria uma variável do tipo real que pode assumir valores em uma faixa maior (double = long float)
     char c; // cria variável do tipo caráter
     string str; // cria uma variável do tipo string (texto). OBS: Incluir biblioteca string
     bool condicao; // cria uma variável do tipo booleano (true ou false)

     x = 2;
     y = 5.5;
     c = 'a';
     str = "Hello, World!";
     condicao = true;

     cout << "O valor é " << x << endl;
     cout << "Digite um valor inteiro: ";
     cin >> x; 
     cout << "O novo valor é: " << x << endl;   

     return 0;
}











