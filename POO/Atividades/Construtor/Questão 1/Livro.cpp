#include <iostream>
#include <string>
using namespace std;
class Livro
{

public:
    Livro(string nome);              // Costrutor
    void setCourseNome(string nome); // sertte garava informação
    string getCourseNome(); // getter printa as informação salva
    void displayMessage(); //metado emprimir

private:
    string courseNome; // atributo 
};

Livro::Livro(string nome)
{
    setCourseNome(nome);
}

void Livro::setCourseNome(string nome) // sertte
{
    courseNome = nome;
}
string Livro::getCourseNome()
{
    return courseNome;
}

void Livro::displayMessage()
{
    cout << "Bem-vindo ao livro de notas para " << getCourseNome() << " !" << endl;
}

int main(int argc, char const *argv[])
{
    Livro gradelivro1 ("BCC221 - POO");
    Livro gradelivro2 ("BCC202 - AED EU");

    cout << "gradelivro1 criando para o curso: " 
    << gradelivro1.getCourseNome()
    <<"\ngradelivro2 criando para o curso: " 
    << gradelivro1.getCourseNome()<<endl;

}
