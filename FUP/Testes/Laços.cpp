#include<iostream>

using namespace std;
float media () {
    int x=0, n=0, cont=0;
    float med=0;

    cout << "Digite a quantidade de valores";
    cin >> n;
    while(cont=n) {
        cout << "Digite um novo valor: ";
        cin >> x;
        cont++;
    }
    med = med/(float) n;
    return med;
}

int main() {
    cout << "Media dos valores = " << endl;

    return 0;
}
