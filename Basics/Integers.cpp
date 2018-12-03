/***************************************************************************************/ 
/*             Name                : Integers.cpp                                      */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>
#include <limits>

using namespace std;

int main(){

    int value = 56445;
    cout << value << endl;

    //integer16 value range
    cout << "max value of int 16 is: "<<INT16_MAX <<endl;
    cout << "min value of int 16 is: "<<INT16_MIN <<endl;

    //long integer value range
    long int lvalue = 2666344895;
    cout << lvalue << endl;
    cout << "max value of long int is: " <<__LONG_MAX__ <<endl;
    
    //short integer value range
    short int svalue = 2666;
    cout << svalue << endl;
    cout << "max value of short int is: " << __SHRT_MAX__ <<endl;

    //sizeof different integers        
    cout <<"the size of integer is: " << sizeof(int) <<endl;
    cout <<"the size of short integer is: " << sizeof(short int) <<endl;
    cout <<"the size of long integer is: " << sizeof(long int) <<endl;
    cout <<"the size of unsigned integer is: " << sizeof(unsigned int) <<endl;

    unsigned int uValue = -533679;
    cout << uValue << endl;

    return 0;
}