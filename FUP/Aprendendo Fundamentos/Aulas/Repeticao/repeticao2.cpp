#include<iostream>
#include<string>

using namespace std;

int main() {
     int n;
    
     for(n=10; n != 1; ) {
        cout << "n=" << n << endl;
        if (n % 2 == 0) {        // n é par
            n = n / 2;
        }
        else {                   // n é ímpar
            n = (n * 3) + 1;
        }
	cout << "n=" << n << endl;
     }

     /*n=10;
     while (n != 11) {
        cout << "n=" << n << endl;
        if (n % 2 == 0) {        // n é par
            n = n / 2;
        }
        else {                   // n é ímpar
            n = (n * 3) + 1;
        }
	cout << "n=" << n << endl;
     }*/

     return 0;
}






