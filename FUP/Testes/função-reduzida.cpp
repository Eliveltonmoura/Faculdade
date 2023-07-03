#include <iostream>

using namespace std;

int soma(int x1, int x2) {
    int res=0;

    res= x1+x2;
    return res;
    }
int main() {
    int resultado=0, a=0, b=0;
    cout << "Digite os dois valores:\n";
    cin >> a >> b;

    resultado = soma (a,b);
    cout << "A soma e igual a " << resultado << endl;
    return 0;
}
