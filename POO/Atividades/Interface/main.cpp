#include "GradeBook.h"

int main(int argc, char const *argv[]){
    GradeBook gradeBook1("BCC221 - POO");
    GradeBook gradeBook2("BCC202 - AED's I");

    cout << "gradeBook1 created for course: " 
    << gradeBook1.getCourseNome()
    <<"\ngradeBook2 created for course: " 
    << gradeBook2.getCourseNome()<<endl;

    return 0;
}