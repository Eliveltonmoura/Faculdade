#include <iostream>
#include <string>

using namespace std;
// Definição da template de função printArray
template <typename T>
void printArray(const T *array, int count)
{
    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
} // fim do template de função printArray

int main()
{
    const int ACOUNT = 5; // tamanho do array a
    const int BCOUNT = 7; // tamanho do array b
    const int CCOUNT = 6; // tamanho do array c

    int a[ACOUNT] = {6};
    double b[BCOUNT] = {7};
    char c[CCOUNT] = "8";                  // posição 6 para null
    cout << "O vetor a contem : " << endl; // chama a especialização da template de função do tipo inteiro
    printArray(a, ACOUNT);
    cout << "O vetor b contem:"
         << endl; // chama a especialização da template de função do tipo double
    printArray(b, BCOUNT);
    cout << "O vetor c contem:" << endl; // chama a especialização da template de função do tipo caractere
    printArray(c, CCOUNT);
    return 0;
}