#include<iostream>

using namespace std;

int main () {

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if((num % 3 == 0 && num % 5 == 0) && num % 7 != 0)
        cout << "sim";
    else
        cout << "nao";

    return 0;
}
