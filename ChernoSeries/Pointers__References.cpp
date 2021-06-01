/***************************************************************************************/ 
/*             Name                : Pointers__References.cpp                          */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 01-Jun-2021 11:14:40 PM                           */
/***************************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

#define LOG(X) std::cout << x << std::endl

void Pointers(){

    int var =8;
    void* ptr = &var;
    // void* ptr = nullptr;  //nullptr is introduced in c++11
    std::cout << ptr << std::endl << var << std::endl;


    char* buffer = new char[8]; //allocate buffer of size 8bytes, dynamically
    std::memset(buffer, 1, 8); //set the values to 0
    std::cout << buffer << std::endl;

    char** newptr = &buffer; //pointer to buffer pointer (i.e double pointers)
    std::cout << newptr << std::endl;
    delete[] buffer; //clear the memory

}

void Increment(int& value){ //reference is created instead of explicitly passing address
    value++;

}
void References(){

    //they are just an alias to a pointer, once references are declared-> they cannot be changed
    int var = 10;
    Increment(var);
    std::cout << var << endl;


}

int main(){

    Pointers();
    References();
    // std::cin.get();
    return 0;
}