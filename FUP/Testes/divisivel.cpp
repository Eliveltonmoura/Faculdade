#include<iostream>

using namespace std;

int main() {

    int a=0, b=0;

    cout << "numero 1: ";
    cin >> a;

    cout << "numero 2: ";
    cin >> b;

    if(a%b==0) {
        cout << "sim";
    }

    else cout << "nao";

    return 0;
}
