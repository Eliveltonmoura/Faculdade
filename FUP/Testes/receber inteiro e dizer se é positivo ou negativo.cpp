#include <iostream>
using namespace std;

int main() {
    int x=0;

    cout << "Digite o valor inteiro: ";
    cin >> x;

    if(x > 0) {
        cout << "O valor e Positivo\n";
    }
    if(x < 0) {
        cout << "O valor e Negativo";
    }
    if(x == 0) {
        cout << "O valor e Nulo";
    }

    return 0;
}
