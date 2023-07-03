#include <iostream>
using namespace std;

float divide(float a, float b)
{
    if (b == 0)
    {
        throw 1; // o erro aqui era um ; que estava faltando
    }
    else
    {
        return a / b; // o erro aqui era um variaval que estava errada, tinha c no lugar de um b
    }
}
int main()
{
    int a, b, c;
    bool errorr = false;
    cout << "Digite o valor do Numerador:";
    cin >> a;
    cout << "\n";
    cout << "Digite o valordo Denominador:";
    cin >> b;

    do
    {
        try // o erro aqui era cotch no lugar de try
        {
            cout << "Valor da Divisao a/b:" << divide(a, b);
            errorr = false;
        }
        catch (int erro)
        {
            if (erro == 1)
            {
                cout << "Erro de divisao por zero!!!!" << endl;
                cout << "Digite um novo valor para o Denominador diferente de zero:";
                cin >> b;
            }
            errorr = true;
        }
    } while (errorr); // o erro aqui era um ; que estava faltado
    cout << "\n\n";
    return 0;
}