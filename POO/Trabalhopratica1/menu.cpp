#include "menu.h" // chamada da intefase menu;
#include "Cd.h"   // chamada da intefase Cd;
#include <string>

void menu()
{
    bool fasa = true;
    int op;
    string art = {""};
    string tit = {""};
    int ano = {0};
    string gen = {""};
    int dur = {0};
    float vol = {0.0};
    // criação do objeto Cd
    Cd n = Cd("Elivelton", "Um Amor", 2008, "Romance", 3, 2.5, true);

    do
    {
        cout << "------------------------- Menu---------------------------\n"
             << "1.Busca\n"
             << "2.Mostra Faixas\n"
             << "3.Cadastra \n"
             << "0.Sair \n"
             << "\n";
        cout << "Digite uma opcao: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "nada aqui";

            break;
        case 2:
            cout << "-------------------------Faixas--------------------------\n";
            n.print();
            break;
        case 3: // aqui faz os castros
            cout << "Cadastrar Faixa  \n";
            cout << "Artista: ";
            cin >> art;
            cout << "Titulo: ";
            cin >> tit;
            cout << "Ano de lansamento: ";
            cin >> ano;
            cout << "Genero: ";
            cin >> gen;
            cout << "Duração: ";
            cin >> dur;
            cout << "Volune: ";
            cin >> vol;
            // setando os valores nos atributos da classe media

            n.setArtista(art);
            n.setTitulo(tit);
            n.setLansamento(ano);
            n.setGenero(gen);
            n.setDuracao(dur);
            n.setVolume(vol);
            break;
        case 0:
            fasa = false;

        default:

            break;
        }

    } while (fasa != false);
}