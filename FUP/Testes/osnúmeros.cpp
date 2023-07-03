#include<iostream>
using namespace std;

int maior (int x1, int x2, int x3, int x4) {
    int m = 0;
    m = x1;
    if(x2 > m) m = x2;
    if(x3 > m) m = x3;
    if(x4 > m) m = x4;
    return m;
}
int main () {
    int x1=0, x2=0, x3=0, x4=0, m=0;

    cout << "Digite quatro valores:\n ";
    cin >> x1 >> x2 >> x3 >> x4;

    m = maior(x1, x2, x3, x4);
    cout << "O maior valor e " << m << endl;

    return 0;
}
