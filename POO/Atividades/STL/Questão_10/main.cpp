#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<char, int> first;
    //insere os pares
    first.insert(pair<char, int>('a', 10));
    first.insert(pair<char, int>('b', 15));
    first.insert(pair<char, int>('b', 20));
    first.insert(pair<char, int>('c', 25));
    //localiza a ocorrência do elemento
    multimap<char, int>::iterator it = first.find('a');

    //remove o elemento
    first.erase(it);

    multimap<char, int> second(first.begin(), first.end()); //construtor iterador
    multimap<char, int> third(second);                      //construtor cópia
    //imprime os pares do multimapa
    for (multimap<char, int>::const_iterator it = first.begin(); it != first.end(); ++it)
        cout << it->first << '\t' << it->second << '\n';

    return 0;
}