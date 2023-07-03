#include<iostream>

using namespace std;

float media(int x1, int x2, int &maior) {
    float res=0;

    maior = x1;
    if(x2 > maior) maior = x2;

    res = (x1+x2)/2.0;
    return res;
}

int main() {
    int x1=0, x2=0, maior=0;
    float med=0;

    cout << "Digite dois valores inteiros:\n";
    cin >> x1 >> x2;
    med = media(x1,x2,maior);
    cout << "Media = " << med << " e Maior = " << maior << endl;

    return 0;

}
