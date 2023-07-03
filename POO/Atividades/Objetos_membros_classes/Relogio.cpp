#include"Relogio.h"

Relogio::Relogio(int hr=0, int min=0, int seg=0){
    setRelogio(hr,min,seg);
}
void Relogio::setRelogio(int hr, int min, int seg){
    h=hr;
    m=min;
    s=seg;
}
void Relogio::printRelogio(){
    
    cout << h << ':'<< m << ':' << s << " "<< endl;
}