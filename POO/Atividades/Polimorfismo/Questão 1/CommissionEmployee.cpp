#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
    : firstName(first), lastName(last), socialSecurityNumber(ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}
void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}
string CommissionEmployee::getFirstName() const
{
    return firstName;
}
void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}
string CommissionEmployee::getLastName() const
{
    return lastName;
}
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}
void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = sales;
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = rate;
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}
void CommissionEmployee::print() const
{
    cout << "Commission employee: "
         << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: "
         << getSocialSecurityNumber()
         << "\nGross sales: " << getGrossSales()
         << "\ncommission rate: " << getCommissionRate();
}