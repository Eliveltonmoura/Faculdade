
#include <iostream> // bibliotecas
#include <string>
#include <iomanip>
#include <vector>
#ifndef __trabalhopratica1_Midia__
#define __trabalhopratica1_Midia__

using namespace std;
// criação da classe
class Midia
{
private: // atributos privados que vão ser a acessados via gettes e settes
    string artista = {};
    string titulo = {};
    vector<string> faixas; // Coleção
    int lansamento = {};
    string genero = {};
    vector<string> keywords; // coleção

public: // metados para fazer a açoes requeridas todos publicos
    // listFaixa f = listFaixa(10);
    Midia();
    Midia(const string &, const string &, vector<string>,
          int lansamento, const string &, vector<string>);

    void setArtista(const string &);
    string getArtista() const;

    void setTitulo(const string &);
    string getTitulo() const;

    void setFaixas(string faixa); /// coleção
    vector<string> getFaixas();

    void setLansamento(int lansamento);
    int getLansamento();

    // coleção
    void setGenero(const string &);
    string getGenero() const;

    void setKeywords(string keywords); // coleção
    vector<string> getKeywords();      // coleção
};

#endif
////-------------------------------------------------------------------------------------------------------------
