#include<string>
#include"Relogio.h"

class RelogioComAlarme
{
    private:
        bool ligado;
        Relogio alarme;
        string tom;
    public:
           RelogioComAlarme();
           void setAlarme(string, bool,int,int,int);
           void printAlarme();        
    
    
};    

