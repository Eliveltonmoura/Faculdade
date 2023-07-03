#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned int i;
    vector<int> first;                               // vector de ints vazio
    vector<int> second(4, 100);                      // quatro inteiros de valor 100
    vector<int> third(second.begin(), second.end()); // itera pelo segundo vector
    vector<int> fourth(third);                       // copia o terceiro vector o construtor iterador também pode ser utilizado com arrays
    int myints[] = {16, 2, 77, 29};
    vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
    cout << "O tamanho do quinto e:" << fifth.size() << endl;

    //adiciona o elemento ao final do vector
    first.push_back(3);
    //remove o elemento ao final do vector
    first.pop_back();

    //iterador inicio para o final, somente leitura
    vector<int>::const_iterator it;

    // exibe elementos vector utilizando const_iterator
    for (it = first.begin(); it != first.end(); ++it)
        cout << *it << ' ';
    return 0;
}