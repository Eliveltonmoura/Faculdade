#include<iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Digite um numero: ";
    cin >> a;

    cout << "Digite outro numero: ";
    cin >> b;

    cout << "Digite o ultimo: ";
    cin >> c;

    if(a==b && a==c) {
        cout << "Os tres numeros sao iguais.";
    }
    if((a!=b && b==c) || (a==b && b!=c) || (b!=c && a==c)) {
        cout << "Dois numeros iguais.";
    }
    else if(a!=b && b!=c) {
        cout << "Nenhum numero igual.";
    }
    return 0;
}
