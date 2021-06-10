/***************************************************************************************/ 
/*             Name                : VirtualFunctions.cpp                              */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 10-Jun-2021 11:11:25 PM                           */
/***************************************************************************************/

#include <iostream>
using namespace std;

#define LOG(X) std::cout << x << std::endl

class Entity{
    public:
        //creating / using virtual keyword , helps achieve dynamic polymorphism and calls the correct
        //GetName method accordingly w.r.t the class.
        // Virtual functions introduce Dynamic DIspatch, where we have v table, associated 
        // with mapping of appropriate functions
        virtual std::string GetName(){
            return "Entity"; 
            }
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
};

//print the name from appropriate class
void PrintName(Entity *entity){
    std::cout << entity->GetName() << std::endl;
}

int main(){

    //create an entity obj
    Entity* e = new Entity();
    PrintName(e);

    //create an player obj
    Player* p = new Player("Srini");
    PrintName(p);

    // std::cin.get();
    return 0;
}