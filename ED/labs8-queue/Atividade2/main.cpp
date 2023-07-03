

#include <iostream>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int a{0};
    int b{0};
    queue<char> times;

    // for (int i = 0; i < 16; i++)
    // {

    //     times.push('A' + i);
    //     cout << times.front() << endl;
    // } /

    times.push('A');
    times.push('B');
    times.push('C');
    times.push('D');
    times.push('E');
    times.push('F');
    times.push('G');
    times.push('H');
    times.push('I');
    times.push('J');
    times.push('K');
    times.push('L');
    times.push('M');
    times.push('N');
    times.push('O');
    times.push('P');

    for (int j = 0; j < 15; j++)
    {
        cin >> a >> b;

        if (a < b)
        {
            times.pop();
            times.push(times.front());
            times.pop();
        }
        else
        {
            times.push(times.front());
            times.pop();
            times.pop();
        }
    }

    cout << times.front() << endl;
}