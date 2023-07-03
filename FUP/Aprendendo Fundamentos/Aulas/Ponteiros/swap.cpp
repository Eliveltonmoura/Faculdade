#include <iostream>

using namespace std;

void swap(int *pi, int *px) {
	int aux;

        aux = *pi;
        *pi = *px;
        *px = aux;
}

int main()
{
   int i=3, x=5;

   swap(&i,&x);
   cout << "i = " << i << endl;
   cout << "x = " << x << endl;

   return 0;
}




























































