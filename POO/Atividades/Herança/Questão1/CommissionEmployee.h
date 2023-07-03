#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

class CommissionEmployee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
    void setFirsName(const string &);
    string getFirsName();
    void setLastName(const string &);
    string getLastName();
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const;
    void setGrossSales(double);
    double getGrossSales() const;
    void setCommissionRate(double);
    double getCommissionRate() const;
    double earnings() const;
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;     // vanda bruta semanal
    double commissionRate; // porcentagem da comisão
};
