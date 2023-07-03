#include <iostream>

using namespace std;

int main() {
   float * vet = NULL;

   for(long long i=0; i< 1000;i++) {
       vet = new float[100];
       delete [] vet;

       vet = (int *) malloc(100*sizeof(float));
       free(vet);
   }
   
   


   return 0;
}




























































