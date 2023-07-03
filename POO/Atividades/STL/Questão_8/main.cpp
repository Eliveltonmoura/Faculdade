#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> first; // multiset de inteiros vazio
    int myints[] = {10, 20, 30, 20, 20};
    multiset<int> second(myints, myints + 5);           // ponteiros utilizados como iteradores
    multiset<int> third(second);                        //construtor cópia
    multiset<int> fourth(second.begin(), second.end()); // construtor iterador.

    //insere no conjunto
    first.insert(15);

    //conta quantos elementos 15 existem no conjunto
    cout << "Quantos elementos tem no conjunto: " << first.count(15) << endl;

    //encontra a ocorrência do valor 15
    multiset<int>::iterator result = first.find(15);

    //retorna um iterador para o final se não achar
    if (result == first.end())
        cout << "nao encontrou";
    return 0;
}