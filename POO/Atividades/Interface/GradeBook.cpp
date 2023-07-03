#include"GradeBook.h"

GradeBook::GradeBook(string nome)
{
    setCourseNome(nome);
}

void GradeBook::setCourseNome(string nome) // sertte
{
    courseNome = nome;
}
string GradeBook::getCourseNome()
{
    return courseNome;
}

void GradeBook::displayMessage()
{
    cout << "Welcame to the grade book for\n" << getCourseNome() << " !" << endl;
}

