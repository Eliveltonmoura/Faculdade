#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> first;
    //atribuição direta
    first['a'] = 10;
    first['b'] = 30;
    first['c'] = 50;
    first['d'] = 70;
    map<char, int> second(first.begin(), first.end()); //construtor iterador
    map<char, int> third(second);                      //construtor cópia
                                                       //localiza a ocorrência do elemento
    map<char, int>::iterator it = first.find('a');

    //imprime o par
    cout << it->first << '\t' << it->second << '\n';

    //imprime os pares do mapa
    for (map<char, int>::const_iterator it = first.begin(); it != first.end(); ++it)
        cout << it->first << '\t' << it->second << '\n';

    return 0;
}