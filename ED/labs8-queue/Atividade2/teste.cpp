#include <queue>
#include <iostream>

int main()
{
    using namespace std;
    queue<int> q1, s2;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    queue<int>::size_type i;
    i = q1.size();
    cout << "The queue length is " << i << "." << endl;

    i = q1.front();
    cout << "The element at the front of the queue is "
         << i << "." << endl;

    q1.pop();

    i = q1.size();
    cout << "After a pop the queue length is "
         << i << "." << endl;

    i = q1.front();
    cout << "After a pop, the element at the front of the queue is "
         << i << "." << endl;
}