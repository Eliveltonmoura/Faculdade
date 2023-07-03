
#include<iostream>
#include<string>

using namespace std;

int maior_menor(int a, int b, int c, int &men) {
   int maior;
   if(a>=b && a>=c) maior = a;
   if(b>=a && b>=c) maior = b;
   if(c>=a && c>=b) maior = c;

   if(a<=b && a<=c) men = a;
   if(b<=a && b<=c) men = b;
   if(c<=a && c<=b) men = c;

   return maior;
}

int main() {
     int n1=0,n2=0,n3=0,maior=0,menor=0;

     cout << "Digite três valores inteiros: ";
     cin >> n1 >> n2 >> n3;

     maior = maior_menor(n1,n2,n3,menor);
     
     cout << "O maior valor é: " << maior << " e o menor é: " << menor << endl;

     return 0;
}











