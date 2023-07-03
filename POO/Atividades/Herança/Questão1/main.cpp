#include"CommissionEmployee.h"

int main(int argc, char const *argv[])
{
    CommissionEmployee employee("Sue","jones","222-222-2222 ",10000,.06 );

    cout << fixed << setprecision(2);

    cout <<"Employee insformation obtained by get functions: \n"
         <<"\nFrist name is " << employee.getFirsName()
         <<"\nLast name is " <<employee.getLastName()
         <<"\nSocial security number is "
         <<employee.getSocialSecurityNumber()
         <<"\nGrass sales is "<< employee.getGrossSales()
         <<"\nCommission rate is "<<employee.getCommissionRate()<< endl;

         employee.setGrossSales(8000);
         employee.setCommissionRate(.1);
         cout << "\nUpdated employee insformation output by print function: \n" << endl;

         employee.print();

         cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
         return 0;




    return 0;
}
