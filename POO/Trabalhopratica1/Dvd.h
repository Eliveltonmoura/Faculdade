#include <iostream>
#include <string>
#include <vector>
#include "Midia.h"
#ifndef __trabalhopratica1_Dvd__
#define __trabalhopratica1_Dvd__
using namespace std;

class Dvd : public Midia
{
private:
   vector<string> formatoAudio;
   vector<string> formatoTela;
   vector<string> legenda;

public:
   Dvd(const string &, const string &, vector<string>, int lansamento, const string &, vector<string>,
       vector<string>, vector<string>, vector<string>); // costrutor da clsse DVD

   void setFormatoAudio(string FormatoAudio);
   vector<string> getFormatoAudio();

   void setFormatoTela(string FormatoAudio);
   vector<string> getFormatoTela();

   void setLegenda(string legenda);
   vector<string> getLegenda();
};
#endif
