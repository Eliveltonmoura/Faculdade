#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> first; //conjunto vazio de inteiros
    int myints[] = {10, 20, 30, 40, 50};
    set<int> second(myints, myints + 5);           //ponteiros utilizados como iteradores
    set<int> third(second);                        //construtor cópia
    set<int> fourth(second.begin(), second.end()); // construtor iterador.

    //insere o elemento
    first.insert(10);

    //remove o elemento
    first.erase(40);
    //localiza o elemento
    set<int>::iterator it = first.find(40);
    //troca os elementos dos conjuntos
    first.swap(second);

    for (it = first.begin(); it != first.end(); it++)
        cout << " " << *it;
    cout << endl;

    return 0;
}