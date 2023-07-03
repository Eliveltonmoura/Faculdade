#include<iostream>
using namespace std;

int main () {
    int x;

    cout << "Digite um numero: ";
    cin >> x;

    if (x > 0) {
        cout << "positivo\n";
    }
    if (x < 0) {
        cout << "negativo\n";
    }
    if (x==0) {
        cout << "nulo\n";
    }
    return 0;
}
