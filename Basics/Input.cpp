/***************************************************************************************/ 
/*             Name                : Input.cpp                                         */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>

using namespace std;

int main(){

    cout << "enter you name: " << flush;
    string input;       //declare a string to get the input from user to store the name
    cin >> input;        //cpp keyword to get the input
    cout << "You entered: " << input << endl;

    cout << "enter the value of the number: " << flush;
    int value;
    cin >> value;
    cout << "You entered the number: " << value << endl;
    return 0;
}