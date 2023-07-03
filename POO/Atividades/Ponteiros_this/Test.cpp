#include"Test.h"

Test::Test(int volue){
   // vazio
}

void Test::print() const {
    //utiliza implicitamente o ponteiro this implicito e explito;
    
    cout << " x = " << x;


    cout << "\n this-> x = " << this->x << endl;
}
