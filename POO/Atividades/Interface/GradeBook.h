#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
public:
    GradeBook(string nome);              
    void setCourseNome(string nome); 
    string getCourseNome(); 
    void displayMessage(); 

private:
    string courseNome; 
};