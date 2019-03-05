/***************************************************************************************/ 
/*             Name                : Comparing Floats.cpp                              */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-26 15:48:01                               */
/***************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float value1 = 1.1;

    if(value1 < 1.11){
        cout << "equals" <<endl;
    }
    else{
        cout << "not equals" << endl;
    }

    cout << setprecision(10) << value1 << endl;


    return 0;
}