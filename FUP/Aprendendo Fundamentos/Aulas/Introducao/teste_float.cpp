
#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
     float n1;

     n1 = 0.1;

     if( fabs((3.0*n1) - 0.3) < 0.000001) {
        cout << "Está certo!" << endl;
	
     } else {
	cout << "Está errado!" << endl;
     }

     return 0;
}











