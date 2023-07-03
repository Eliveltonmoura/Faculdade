#include <iostream>
using namespace std;
#include "Stack.h" // Definição de template de classe Stack
int main()
{
    Stack<double> doubleStack(5); // tamanho 5
    double doubleValue = 1.1;
    // insere 5 doubles em doubleStack
    while (doubleStack.push(doubleValue))
    {
        cout << doubleValue << ' ';
        doubleValue += 1.1;
    }
    while (doubleStack.pop(doubleValue))
        cout << doubleValue << ' ';

    Stack<int> intStack; // tamanho padrão de 10
    int intValue = 1;
    // insere 10 inteiros em intStack
    while (intStack.push(intValue))
    {
        cout << intValue << ' ';
        intValue++;
    }
    // remove elementos de intStack
    while (intStack.pop(intValue))
        cout << intValue << ' ';
    return 0;
}