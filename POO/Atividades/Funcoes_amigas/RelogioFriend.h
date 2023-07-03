#include <iostream>
#include <string>
using namespace std;

class RelogioFriend
{
    friend void alteraHMS(RelogioFriend &r);

private:
    int h, m, s;

public:
    RelogioFriend(int, int, int);
    void setHora(int, int, int);
    void printHora();
};
