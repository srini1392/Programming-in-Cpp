/***************************************************************************************/ 
/*             Name                : IF-else loops.cpp                                 */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>
using namespace std;

int main(){

    cout << "1.\tAdd new record" << endl;
    cout << "2.\tDelete record"  << endl;
    cout << "3.\tView record"    << endl;
    cout << "4.\tSearch record"  << endl;
    cout << "5.\tQuit"           << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value ;

    if (value < 3){
        cout << "\n Insufficient previleges . . . " << endl;
    }
    else{
        cout << "\n Privilege level sufficient "  << endl;
    }


    if (5 == value){
        cout << "\n Appplication Quitting . . . "  << endl;
    }
    else{
        cout << "\n Not  Quitting . . ."  << endl;
    }


    return 0;
}