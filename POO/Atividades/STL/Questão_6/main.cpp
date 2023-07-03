#include <iostream>
#include <deque>
using namespace std;
int main()
{
    unsigned int i;
    deque<int> first;                               // deque vazio deo tipo int
    deque<int> second(4, 100);                      // quatro inteiros com o valor 100
    deque<int> third(second.begin(), second.end()); // itera pelo segundo
    deque<int> fourth(third);                       // construtor cópia
    // o construtor iterador também pode ser utilizado com arrays
    int myints[] = {16, 2, 77, 29};
    deque<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
    first.push_front(2);
    first.push_front(3);
    first.push_back(1);

    // utiliza o operador de subscrito para modificar elemento na localização 1
    first[1] = 5;

    first.pop_front(); // remove o primeiro elemento

    first.pop_back(); // remove o primeiro elemento

    cout << "O conteudo e:";
    for (i = 0; i < first.size(); i++)
        cout << " " << first[i];
    return 0;
}