#include<iostream>
using namespace std;

int main() {
    int x1, x2;

    cout << "Digite o primeiro valor: ";
    cin >> x1;

    cout << "Digite o segundo valor: ";
    cin >> x2;

    if((x1 % 3 == 0 && x2 % 3 == 0) || (x1 % 5 == 0 && x2 % 5 == 0))
        cout << "sim";
    else
        cout << "nao";

    return 0;
}
