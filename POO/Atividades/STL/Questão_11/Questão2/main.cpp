#include <iostream>
#include <queue> // definição da classe queue adaptadora
using namespace std;
int main()
{
    queue<double> values; // fila com doubles

    // insere elementos nos valores de fila
    values.push(3.2);
    values.push(9.8);
    values.push(5.4);

    // remove elementos da fila

    cout << "Os valores sao; ";
    while (!values.empty())
    {
        cout << values.front() << ' '; // visualiza elemento da frente da fila
        values.pop();                  // remove o elemento
    }
    cout << endl;
    return 0;
}