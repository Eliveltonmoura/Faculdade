#include<iostream>

using namespace std;
float media () {
    int x=0, n=0, cont=0;
    float med=0;

    cout << "Digite a quantidade de valores: ";
    cin >> n;

    for(cont=0; cont<n; cont++) {
        cout << "Digite um novo valor: ";
        cin >> x;
        med = med + x;
    }
    med = med/(float) n;
    return med;
}
int main() {
    cout << "Media dos valores = " << endl;
    return 0;
}
