/***************************************************************************************/ 
/*             Name                : Floating point types.cpp                          */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){

    float fvalue = 76.4;
 
    cout << scientific << fvalue <<endl;
    cout << setprecision(20) << fixed << fvalue <<endl;

    double dvalue = 123.45669;
    cout << setprecision(20) << fixed << dvalue <<endl;

    long double ldvalue = 123.45698711563;
    cout << setprecision(20) << fixed << ldvalue <<endl; 

c
    cout << "Size of float is :" <<sizeof(fvalue) << endl;
    cout << "Size of double is :" <<sizeof( dvalue) << endl;
    cout << "Size of long double is :" <<sizeof( ldvalue) << endl;

    return 0;
}