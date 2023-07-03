#include <iostream>

using namespace std;

int maior (int x1, int x2, int x3) {
    int m=0;

    m=x1;
    if(x2 > m) m = x2;
    if(x3 > m) m = x3;
    return m;
}

int main() {
    int x1=0, x2=0, x3=0, x4=0, x5=0, m=0;

    cout << "Digite tres valores:\n";
    cin >> x1 >> x2 >> x3;

    m = maior(x1, x2, x3);
    cout << "O maior valor dentre os tres e: " << m << endl;
    cout << "Digite mais dois valores:\n";
    cin >> x4 >> x5;

    m = maior(x4, m, x5);
    cout << "O maior valor dentre os cinco e: " << m << endl;
    return 0;

}


//
   int x1, x2, x3,x4,x5;


    cin >> x1;

    x2 = x1/600;

    x3 = x2/60;

    x4 = x3%60;

    cout << x2 << ":" << x3 << ":" << x4;
    //
