#include"RelogioFriend.h"

RelogioFriend::RelogioFriend(int hr = 0, int min = 0, int seg = 0)
{
    setHora(hr, min, seg);
}
void RelogioFriend::setHora(int hr, int min, int seg)
{
    h = hr;
    m = min;
    s = seg;
}
void RelogioFriend :: printHora()
{

    cout << h << ':' << m << ':' << s << endl;
}
void alteraHMS(RelogioFriend &r){
    r.h = 10;
    r.m = 10;
    r.s = 10;
}
