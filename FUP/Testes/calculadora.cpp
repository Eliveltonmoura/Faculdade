#include<iostream>
using namespace std;
int main() {
    float x1, x2, res=0;
    char op;
    string invalida;

    //cout << "Digite os operandos:\n";
    cin >> x1 >> x2;
    //cout << "Digite o operador: ";
    cin >> op;

    if(x2==0)
        cout << "invalida";

    switch(op) {
        case '*': res = x1*x2;
            cout << "Resultado = " << res << endl;
            break;

        case '/': res = x1/x2;
            cout << "Resultado = " << res << endl;
            break;

        case '+': res = x1+x2;
            cout << "Resultado = " << res << endl;
            break;

        case '-': res = x1-x2;
            cout << "Resultado = " << res << endl;
            break;
    }
    return 0;
}
