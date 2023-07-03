#include"RelogioFriend.h"


int main(int argc, char const *argv[])
{
    RelogioFriend r(12,0,0);
    r.printHora();
    alteraHMS(r);
    r.printHora();
    return 0;
}
