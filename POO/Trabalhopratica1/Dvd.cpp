#include "Dvd.h"
#include <vector>
// clsse DVD feita

Dvd::Dvd(const string &artista, const string &titulo, vector<string> faixas, int lansamento,
         const string &genero, vector<string> keywords, vector<string> FormatoAudio, vector<string> FormatoTela, vector<string> legenda)
    : Midia(artista, titulo, faixas, lansamento, genero, keywords) /// herança dvd
{
    for (string e : formatoAudio) // faixa
    {
        this->setFormatoAudio(e);
    }
    for (string l : formatoTela) // faixa
    {
        this->setFormatoTela(l);
    }

    for (string i : legenda) // faixa
    {
        this->setLegenda(i);
    }
}

void Dvd::setFormatoAudio(string faud)
{
    this->formatoAudio.push_back(faud);
}
vector<string> Dvd::getFormatoAudio()
{
    return this->formatoAudio;
}

void Dvd::setFormatoTela(string ftl)
{
    this->formatoTela.push_back(ftl);
}
vector<string> Dvd::getFormatoTela()
{
    return this->formatoTela;
}

void Dvd::setLegenda(string leg)
{
    this->legenda.push_back(leg);
}
vector<string> Dvd::getLegenda()
{
    return this->legenda;
}