#include <iostream>

using namespace std;
template <typename T>
void bubblesort(T A[], int l, int r)
{
    bool trocou = true;
    for (int i = l; i < r && trocou; i++)
    {
        trocou = false;
        for (int j = r; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                T aux = A[j];
                A[j] = A[j - 1];
                A[j - 1] = aux;
                trocou = true;
            }
        }
    }
}
template <typename T>
void print(T A[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{

    int vec[] = {3, 10, 6, 88, 77, 12, 11};
    int n = sizeof(vec) / sizeof(vec[0]);
    bubblesort(vec, 0, n - 1);
    print(vec, 0, n - 1);
}