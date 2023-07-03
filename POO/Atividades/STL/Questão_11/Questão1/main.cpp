#include <iostream>
#include <stack>  // definição de stack adapter
#include <vector> // definição da template de classe vector
#include <list>   // definição da template de classe list
using namespace std;
int main()
{
    // pilha com deque subjacente padrão
    stack<int> intDequeStack;
    // pilha com vetor subjacente
    stack<int, vector<int>> intVectorStack;
    // pilha com lista subjacente
    stack<int, list<int>> intListStack;

    // insere os valores em cada pilha
    intDequeStack.push(1);
    intVectorStack.push(1);
    intListStack.push(1);

    cout << intDequeStack.push();

    // remove elementos de cada pilha
    intDequeStack.pop();
    intVectorStack.pop();
    intListStack.pop();

    return 0;
}