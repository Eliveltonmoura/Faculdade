#include <iostream>

void partition(int A[], int l, int r)
{
    int pivo = A[r];
    int j = l;
    for (int k = l; k < r; k++)
    {
        if (A[k] <= pivo)
        {
            int aux A[k];
            A[k] = A[k];
            A[j] = aux;
            j++;
        }
    }
    A[r] = A[j];
    A[j] = pivo;
    return j;
}


void QuickSorte(int A[], int l, int r){
    if(l<r){
        int p = partition(A,l,r);
        QuickSorte(A,lp-1);
        QuickSorte(A,p+1,r);
    }
}

int mian(){
    
}