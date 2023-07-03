#include <iostream>
#include <stack>
#include <vector>

using namespace std;
// Na função queima foi pensado em usar uma pilha para armazenar os elementos da fila e outra para armazenar os elementos que serão removidos.
void queima(vector<string> &matriz, int i, int j, int n, int m)
{ // i = linha, j = coluna, n = linhas, m = colunas
    stack<meusPares<int, int>> pilha;
    pilha.push(meus_pares(i, j)); // empilha o par (i, j)
    while (!pilha.empty())
    {                                        // enquanto a pilha nao estiver vazia
        meusPares<int, int> p = pilha.top(); // p recebe o topo da pilha
        pilha.pop();                         // desempilha o topo da pilha
        if (p.lin >= 0 && p.lin < n && p.col >= 0 && p.col < m && matriz[p.lin][p.col] == '#')
        {                                            // se p estiver dentro da matriz e for '#' (queimavel)
            matriz[p.lin][p.col] = 'o';              // queima o '#'
            pilha.push(meu_pares(p.lin - 1, p.col)); // empilha o par (p.first - 1, p.second)
            pilha.push(meu_pares(p.lin + 1, p.col)); // empilha o par (p.first + 1, p.second)
            pilha.push(meu_pares(p.lin, p.col - 1)); // empilha o par (p.first, p.second - 1)
            pilha.push(meu_pares(p.lin, p.col + 1)); // empilha o par (p.first, p.second + 1)
        }
    }
}

int main()
{
    int nl, nc, lp, cp;          // n = linhas, m = colunas, i = linha, j = coluna
    cin >> nl >> nc >> lp >> cp; // le n, m, i e j
    vector<string> mat;          // vetor de strings de tamanho n
    for (int k = 0; k < nl; k++)
    {                  // para k = 0 ate k = n - 1
        cin >> mat[k]; // le a string da linha k
    }
    queima(mat, nl, nc, lp, cp); // chama a funcao queima
    for (int i = 0; i < nl; i++)
    {                           // para k = 0 ate k = n - 1
        cout << mat[i] << endl; // imprime a string da linha k
    }
    return 0;
}