#include <iostream>

using namespace std;

int main () {
  double a = 3.1415926534;
  double b = 2006.0;
  double c = 1.0e-10;

  cout.precision(5);
  cout.setf(ios::fixed);  // cout << fixed
  cout << a << '\n' << b << '\n' << c << "\n\n";
  cout << a << '\n' << b << '\n' << c << "\n\n";

  cout.unsetf(ios::fixed);
  cout << a << '\n' << b << '\n' << c << "\n\n";

  return 0;
}
