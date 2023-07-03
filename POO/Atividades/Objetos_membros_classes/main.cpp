#include "RelogioComAlarme.h"


int main(int argc, char const *argv[])
{
    RelogioComAlarme despertador;
    despertador.setAlarme("Enter Sandman",true,6,0,0);
    despertador.printAlarme();

    return 0;
}
