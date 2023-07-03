#include "Telefone.h"

ostream &operator<<(ostream &output, const Telefone &numero){
    output<< "(" << numero.DDD << ")"
          << numero.inicio << "-" << numero.fim;
          return output;
}

istream &operator >> (istream &input, Telefone &numero){
    input.ignore();
    input >> setw(2) >> numero.DDD;
    input.ignore(1);
    input >> setw(4) >> numero.inicio;
    input.ignore();
    input >> setw(4) >> numero.fim;
    return input;
}

void Telefone::operator*(Telefone ladoDireito){
    DDD = ladoDireito.DDD;
    inicio = ladoDireito.inicio;
    fim = ladoDireito.fim;
}