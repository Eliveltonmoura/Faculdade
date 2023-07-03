#include <iostream>
#include <string>
#include "Cd.h"
#include <vector>
using namespace std;

//#include "Midia.h"

// classe Cd herda atributos da classe Midia;
Cd::Cd() : Midia() {}
Cd::Cd(const string &artista, const string &titulo, vector<string> faixas, int lansamento,
       const string &genero, vector<string> keywords, int duracao, float volume)
    : Midia(artista, titulo, faixas, lansamento, genero, keywords) // herança
{
    this->duracao = duracao;
    this->volume = volume;
}

void Cd::setDuracao(int duracao)
{
    this->duracao = duracao;
}
int Cd::getDuracao()
{
    return duracao;
}

void Cd::setVolume(float volume)
{
    this->volume = volume;
}
float Cd::getVolume()
{
    return volume;
}

void Cd::setColetanea(bool colt)
{
    this->coletanea = colt;
}
bool Cd::getColetanea()
{
    return coletanea;
}

//--------------------------------------------------------------------------------------------------------------
