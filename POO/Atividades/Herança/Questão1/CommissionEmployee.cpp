#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate)
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}
void CommissionEmployee::setFirsName(const string &first)
{
    firstName = first;
}
string CommissionEmployee::getFirsName()
{
    return firstName;
}
void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}
string CommissionEmployee::getLastName()
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
void CommissionEmployee::setGrossSales(double sale)
{
    grossSales = (sale < 0.0) ? 0.0 : sale;
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}
void CommissionEmployee::print() const
{
    cout << "Commission employee: " << firstName << ' ' << lastName
         << "\nsocial security number: " 
         << socialSecurityNumber
         << "\nGross sales: " << grossSales
         << "\ncommission rate: " << commissionRate;

         
}