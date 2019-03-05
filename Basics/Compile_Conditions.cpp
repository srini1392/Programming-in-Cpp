/***************************************************************************************/ 
/*             Name                : Compile_Conditions.cpp                            */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-02-26 15:51:55                               */
/***************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*
    == equality tests
    != not equals
    < less than
    > greater than
*/



int main(){

    int value1 = 7;
    int value2 = 4;

    if(value1 >4)
        cout << "Condition 1: true" <<endl;
    else
        cout << "Condition 1: false" << endl;

    if (value1 == 7 && value2 <3)
        cout << "Condition 2: true" << endl;
    else    
        cout << "Condition 2: false" << endl;

    if(value1 < 5 || value2 <5)
        cout << "Condition 3: true" << endl;
    else
        cout << "Condition 3: false" << endl;

    if(value2 !=0)
        cout << "Condition 4: true" << endl;
    else
        cout << "Condition 4: false" << endl;

    return 0;
}