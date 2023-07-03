#include <iostream>

using namespace std;

int main () {


    int TEMPO, SEGUNDOS, MINUTOS, HORAS;

    cin >> TEMPO;
    SEGUNDOS=TEMPO%60;
    MINUTOS=TEMPO%600;
    HORAS=TEMPO/600;
    cout << ""<<HORAS<<":"<<MINUTOS<<":"<<SEGUNDOS<< "";





    return 0;
}
