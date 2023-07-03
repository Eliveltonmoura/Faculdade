#include <iostream>
#include "Midia.h"
#ifndef __trabalhopratica1_Cd__
#define __trabalhopratica1_Cd__
using namespace std;
class Cd : public Midia
{
private:
    int duracao;
    float volume;
    bool coletanea;

public:
    Cd();
    Cd(const string &, const string &, vector<string>, int lansamento, const string &, vector<string>,
       int duracao, float volume); // costrutor da clsse Cd
    void setDuracao(int duracao);
    int getDuracao();

    void setVolume(float volume);
    float getVolume();

    void setColetanea(bool colt);
    bool getColetanea();
    void print();
};
#endif