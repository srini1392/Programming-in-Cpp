/***************************************************************************************/ 
/*             Name                : IF loops.cpp                                      */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>
using namespace std;

int main(){

    string password = "hello";
    cout << "enter your password :  " << flush;

    string input;
    cin >> input;

    // cout << "'" << input << "'" << endl; // to check the input entered by the user

    if (password == input){

        cout << "Password accepted..! Logging into the system" << endl;
    }
    if (password != input){

        cout << "Password not accepted..! Cannot Log into the system..! Access denied" << endl;
    }

    return 0;
}