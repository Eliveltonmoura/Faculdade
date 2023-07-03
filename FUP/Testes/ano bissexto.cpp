#include<iostream>
using namespace std;
int main() {
    int ano=0;

    cout << "Digite um numero: ";
    cin >> ano;

    if(ano%400==0 || (ano%4==0 && ano%100!=0)) cout << "Bissexto!\n";
    else cout << "Nao e Bissexto\n";
    return 0;
}
