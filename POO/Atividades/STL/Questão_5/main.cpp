#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> first;                               // lista de inteiros vazia
    list<int> second(4, 100);                      // quatro inteiros de valor 100
    list<int> third(second.begin(), second.end()); // itera pela segunda lista
    list<int> fourth(third);                       //construtor cópia

    int myints[] = {16, 2, 77, 29};
    list<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
    first.push_front(1); //insere na frente
    first.push_front(2);
    first.push_back(4); //insere no final
    first.push_back(1);
    //first.remove(4);   // remove todos os 4
    first.unique();    // remove elementos duplicados
    first.pop_front(); // remove elemento da parte da frente
    first.pop_back();  // remove elemento da parte de trás

    first.sort(); // ordena values

    cout << "O conteudo e: ";

    for (list<int>::iterator it = first.begin(); it != first.end(); it++)
        cout << *it << " ";

    return 0;
}