/***************************************************************************************/ 
/*             Name                : PureVirtualFunctions.cpp                          */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 11-Jun-2021 12:22:43 AM                           */
/***************************************************************************************/

#include <iostream>
using namespace std;

#define LOG(X) std::cout << x << std::endl

//Create Pure virtual function class / Interface class
class Printable{
    public:
    virtual std::string GetClassName() = 0;
};


class Entity: public Printable{
    public:
        /* Pure virtual function means there is no method definition in base class
         whilst a derived class needs to have the implementation.
         Also known as Interface class / Abstract class  */
        virtual std::string GetName() {
            return "Entity";
        }

        std::string GetClassName()override{ return "Entity"; }

};

/* Player class , inheriting the Entity class */
class Player: public Entity{
    private:
        std::string m_Name;
    
    public:
    //create a method to have the reference for the name given as input
        Player(const std::string& name)
            :m_Name(name){}
        
        // Writing the override keyword introduced in c++11 helps to mark the overridden function
        // and makes it easy to understand code
        std::string GetName() override {
            return m_Name;
            }
        std::string GetClassName()override { return "Player"; }
};

//print the name from appropriate class
void PrintName(Entity *entity){
    std::cout << entity->GetName() << std::endl;
}

void PrintClassName(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}


class A: public Printable{
    public:
        std::string GetClassName() override {return "A";}
};

int main(){

    Entity* e = new Entity();
    Player* p = new Player("Srini");


    PrintClassName(e);
    PrintClassName(p);
    PrintClassName(new A()); // doing this is memory leak
    


    return 0;
}