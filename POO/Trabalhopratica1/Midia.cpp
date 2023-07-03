#include <iostream>
#include <string>
#include <vector>
#include "Midia.h"
using namespace std;
Midia::Midia() {}
Midia::Midia(const string &artista, const string &titulo,
             vector<string> faixas, int lansamento, const string &genero,
             vector<string> keywords) // construtor de Midia
{

    this->artista = artista;
    this->titulo = titulo;

    for (string i : faixas) // faixa
    {
        this->setFaixas(i);
    }

    setLansamento(lansamento);
    this->genero = genero;

    for (string j : keywords) // keywords
    {
        this->setKeywords(j);
    }
}

/* Os Setters são responsaveis por enserir valores nas variaveis privadas
já os getters são reposponsaveis por pegar os dados salvos da variaveis privadas*/
void Midia::setArtista(const string &artista)
{
    this->artista = artista;
}
string Midia::getArtista() const
{
    return artista;
}
void Midia::setTitulo(const string &titulo)
{
    this->titulo = titulo;
}
string Midia::getTitulo() const
{
    return titulo;
}
void Midia::setFaixas(string faixa)
{
    this->faixas.push_back(faixa);
}
vector<string> Midia::getFaixas()
{
    return this->faixas;
} // coleção

void Midia::setLansamento(int lansamento)
{
    this->lansamento = lansamento;
}
int Midia::getLansamento()
{
    return lansamento;
}
/// coleção

void Midia::setGenero(const string &genero)
{
    this->genero = genero;
}
string Midia::getGenero() const
{
    return genero;
}

void Midia::setKeywords(string keyword)
{

    this->keywords.push_back(keyword);

} // coleção
vector<string> Midia::getKeywords()
{
    return this->keywords;
} // coleção

//------------------------------------------------------------------------------------------------
