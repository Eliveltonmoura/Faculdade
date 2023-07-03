
#include<iostream>
#include<string>

using namespace std;

int main() {
     int horas,minutos,segundos,tempo;

     cout << "Digite o tempo em segundos: ";
     cin >> tempo;

     horas = tempo/3600;
     tempo = tempo%3600;

     minutos = tempo/60;
     segundos = tempo%60;

     cout << horas << "h:" << minutos << "m:" << segundos << "s" << endl;

     return 0;
}











