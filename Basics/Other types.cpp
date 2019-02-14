/***************************************************************************************/ 
/*             Name                : Other types.cpp                                   */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>
using namespace std;

int main(){

    bool bvalue = true;

    cout << bvalue << endl;

    char cvalue = 131;
    cout << (int)cvalue << endl;
    cout << "size of char is :" << sizeof(char) << endl;

    wchar_t wValue = 'i';
    cout << (char)wValue << endl;
    cout << "size of wchar is :" << sizeof(wchar_t) << endl;


    return 0;
}