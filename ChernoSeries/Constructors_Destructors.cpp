/***************************************************************************************/ 
/*             Name                : Constructors_Destructors.cpp                      */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 04-Jun-2021 11:54:35 PM                           */
/***************************************************************************************/

#include <iostream>
using namespace std;

#define LOG(X) std::cout << x << std::endl

class Entity
{
public:
    float X,Y;
    // default constructor
    // Entity(){

    // }

    //constructor with initialization
    Entity(float x,float y){
        X=x;
        Y=y;
        std::cout << "Inside the constructor" <<std::endl;

    }

    ~Entity(){ //special method which gets called when obj gets destroyed
        std::cout << "Inside the Destructor" <<std::endl;

    }

    void print(){
        std::cout << X << ',' << Y << std::endl;
    }
 
   
};

void Function(){
    Entity e(15.0f,25.0f);
    e.print();
    e.~Entity(); //to call destructors

}

int main(){

    
    Function();
    //std::cin.get();
    return 0;
}