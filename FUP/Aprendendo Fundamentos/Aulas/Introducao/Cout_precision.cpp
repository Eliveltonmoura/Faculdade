#include <iostream>
//#include <iomanip>

using namespace std;

int main () {
  double a = 3.1415926534;
  double b = 2006.0;
  double c = 1.0e-10;

  cout.precision(5);

  cout << "default:\n";
  cout << a << '\n' << b << '\n' << c << '\n';

  cout << '\n';

  cout << "fixed:\n" << fixed;
  cout << a << '\n' << b << '\n' << c << '\n';

  cout << '\n';

  cout << "scientific:\n" << scientific;
  cout << a << '\n' << b << '\n' << c << '\n';

  return 0;
}

//int main()
//{
//   int i,j;
//   string nome = "Paulo";
//   double k=200.19239;
//   double w=20.19239;
//
//   cout << "Hello World" << endl;
//   cin >> i >> j;
//   cout << setprecision(2) << fixed;
//
//   //cout.precision(5);
//   cout << k << endl << w << endl;
//   std::cout << std::setprecision(4) << std::fixed;
//   cout << k << endl << w << endl;
//
//   for(i=0; i < 3; i++) cout << i << endl;
//   if((10*0.1) == 1) cout << "IGUAL!" << endl;
//   cout << nome << endl;
//
//   return 0;
//}
