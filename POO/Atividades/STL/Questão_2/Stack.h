#include <iostream>
using namespace std;
template <typename T>
class Stack
{
public:
    Stack(int = 10); // construtor padrão (tamanho de Stack 10)
    // destrutor
    ~Stack()
    {
        delete[] stackPtr; // desaloca o espaço interno para Stack
    }
    bool push(const T &); // insere (push) um elemento na Stack
    bool pop(T &);        // remove (pop) um elemento da Stack
    // determina se a Stack está vazia
    bool isEmpty() const
    {
        return top == -1;
    }

    // determina se Stack está cheia
    bool isFull() const
    {
        return top == size - 1;
    }

private:
    int size;    // número de elementos na Stack
    int top;     // localização do elemento superior (-1 significa vazio)
    T *stackPtr; // ponteiro para a representação interna da Stack
};
// template construtora
template <typename T>
Stack<T>::Stack(int s)
    : size(s > 0 ? s : 10), // valida o tamanho
      top(-1),              // Stack inicialmente vazia
      stackPtr(new T[size]) // aloca memória para elementos
{
    // corpo vazio
}
// insere elemento na Stack;
template <typename T>
bool Stack<T>::push(const T &pushValue)
{
    if (!isFull())
    {
        stackPtr[++top] = pushValue; // insere item em Stack
        return true;                 // inserção bem-sucedido
    }
    return false; // inserção mal-sucedido
}
// remove elemento da Stack;
template <typename T>
bool Stack<T>::pop(T &popValue)
{
    if (!isEmpty())
    {
        popValue = stackPtr
            [top--]; // remove item da Stack
        return true; // remoção bem-sucedida
    }
    return false; // remoção mal-sucedida
}
