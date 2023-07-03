#include <iostream>
#include <string>
using namespace std;

class Recuperacao
{
private:
    static int n;

public:
    Recuperacao()  //atricuto
    {
        n++;
    }
    int getRecuperacao() 
    {
        return n;
    }

    ~Recuperacao() // destrutor
    {
        n--;
    }
};

int Recuperacao::n=0;

int main()
{
    Recuperacao r1, r2, r3;

    cout << r1.getRecuperacao() << endl;
    {
        Recuperacao r4, r5, r6;
        cout << r1.getRecuperacao() << endl;
    }
    cout << r1.getRecuperacao();

    return 0;
}
