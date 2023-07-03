#include <iostream>

using namespace std;

int main()
{
    float din, total;
    int rolos;
    cout << " Digite o total de rolos: ";
    cin >> rolos;
    cout << " Digite o valor: ";
    cin >> din;
    total = din/rolos;

    cout << "O valor e " << total *4 << endl;

    cout << "O valor e " << total *8 << endl;

    cout << "O valor e " << total *12 << endl;

    cout << "O valor e " << total *16 << endl;

    cout << total;

    return 0;
}
