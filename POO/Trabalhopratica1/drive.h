#include "Midia.h"
#include "Cd.h"
#include "Dvd.h"
#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

#ifndef __drive__
#define __drive__
// primeira questão
vector<Cd> getCdEscritor(vector<Cd>, string);

// segunda questão
vector<Dvd> getDvdEscritor(vector<Dvd>, string);

// segunda terceira
vector<Midia> getMidiaEscritor(vector<Midia>, string);

// Quarta questão

vector<Midia> getMidiaAno(vector<Cd>, vector<Dvd>, int);

// void print();

#endif