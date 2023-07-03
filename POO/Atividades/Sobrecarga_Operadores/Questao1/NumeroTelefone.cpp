#include "NumeroTelefone.h"

ostream &operator<<(ostream &output, const NumeroTelefone &numero){
    output<< "(" << numero.DDD << ")"
          << numero.incio << "-" << numero.fim;
          return output;
}

istream &operator >> (istream &input, NumeroTelefone &numero){
    input.ignore();
    input >> setw(2) >> numero.DDD;
    input.ignore(1);
    input >> setw(4) >> numero.incio;
    input.ignore();
    input >> setw(4) >> numero.fim;
    return input;
}
