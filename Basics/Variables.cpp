/***************************************************************************************/ 
/*             Name                : Variables.cpp                                     */
/*             Author              : Srinikethan Mankala                               */
/***************************************************************************************/

#include <iostream>

using namespace std;

int main(){

    int numberCats = 5;
    int numberDogs = 7;
    cout << "number of cats: "<< numberCats << endl;  //synatx : cout<< "sometext" <<Variable <<endline
    cout << "number of dogs: "<< numberDogs << endl;  
    cout << "total number of animals: " << numberCats + numberDogs << endl;

    cout << "new dog acquired..!" <<endl;
    numberDogs = numberDogs + 1;

    cout << "New number of dogs: " << numberDogs << endl;




    return 0;
}