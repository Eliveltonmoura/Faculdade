#include <string>
using namespace std;
#include "CommissionEmployee.h"                              //Declaração da classe CommissionEmployee
class BasePlusCommissionEmployee : public CommissionEmployee // herança
{
private:
    double baseSalary; // salario-base

public:
    BasePlusCommissionEmployee(const string &, const string &, const string &,
                               double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double);
    double getBaseSalary() const;
    double earnings() const;
    void print() const;
};
