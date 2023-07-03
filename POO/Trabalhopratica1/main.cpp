#include <iostream>
#include <string>
#include <vector>
#include "Cd.h"
#include "Dvd.h"
#include "drive.h"
using namespace std;

int main()
{

    Cd n = Cd();
    //------------------------------------------------ cd
    vector<string> artistacd;
    artistacd.push_back("Joao Gomes");
    artistacd.push_back("Aline barros");

    vector<string> titulocd;
    titulocd.push_back("elivelton");
    titulocd.push_back("Matheus");

    vector<string> faixacd01;
    faixacd01.push_back("musica001");
    faixacd01.push_back("musica002");
    faixacd01.push_back("musica003");
    faixacd01.push_back("musica004");
    faixacd01.push_back("musica005");
    faixacd01.push_back("musica006");
    faixacd01.push_back("musica007");
    faixacd01.push_back("musica008");
    faixacd01.push_back("musica009");

    vector<string> faixacd02;
    faixacd02.push_back("musica001");
    faixacd02.push_back("musica002");
    faixacd02.push_back("musica003");
    faixacd02.push_back("musica004");
    faixacd02.push_back("musica005");
    faixacd02.push_back("musica006");
    faixacd02.push_back("musica007");
    faixacd02.push_back("musica008");
    faixacd02.push_back("musica009");

    vector<int> lansametoscd;
    lansametoscd.push_back(2018);
    lansametoscd.push_back(2019);

    vector<string> generocd;
    generocd.push_back("forro");
    generocd.push_back("gospel");

    vector<string> keywordscd;
    keywordscd.push_back("Forro");
    keywordscd.push_back("envangelico");

    vector<int> duracaocd;
    duracaocd.push_back(2);
    duracaocd.push_back(3);

    vector<float> volumecd;
    volumecd.push_back(2.4);
    volumecd.push_back(2.2);

    //---------------------------------------------------------------------dvd

    vector<string> artistadvd;
    artistadvd.push_back("Joao Gomes");
    artistadvd.push_back("Aline barros");

    vector<string> titulodvd;
    titulodvd.push_back("elivelton");
    titulodvd.push_back("Matheus");

    vector<string> faixadvd01;
    faixadvd01.push_back("Video001");
    faixadvd01.push_back("Video002");
    faixadvd01.push_back("Video003");
    faixadvd01.push_back("Video004");
    faixadvd01.push_back("Video005");
    faixadvd01.push_back("Video006");
    faixadvd01.push_back("Video007");
    faixadvd01.push_back("Video008");
    faixadvd01.push_back("Video009");

    vector<string> faixadvd02;
    faixadvd02.push_back("video001");
    faixadvd02.push_back("video002");
    faixadvd02.push_back("video003");
    faixadvd02.push_back("video004");
    faixadvd02.push_back("video005");
    faixadvd02.push_back("video006");
    faixadvd02.push_back("video007");
    faixadvd02.push_back("video008");

    vector<int> lansametosdvd01;
    lansametosdvd01.push_back(2018);
    lansametosdvd01.push_back(2019);

    vector<string> generodvd01;
    generodvd01.push_back("forro");
    generodvd01.push_back("gospel");

    vector<string> keywordsdvd01;
    keywordsdvd01.push_back("Forro");
    keywordsdvd01.push_back("envangelico");

    vector<string> formatoAud01;
    formatoAud01.push_back("mp4");
    formatoAud01.push_back("mp4");

    vector<string> formatotela;
    formatotela.push_back("4:4");
    formatotela.push_back("4:4");

    return 0;
}
