/***************************************************************************************/ 
/*             Name                : Inheritence.cpp                                   */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 07-Jun-2021 10:31:32 PM                           */
/***************************************************************************************/

#include <iostream>
using namespace std;

#define LOG(X) std::cout << x << std::endl

//the class entity will have the aspects of position, move functions
class Entity{
    public:
        float X,Y;
    
        void Move(float xa, float ya){
            X+= xa;
            Y+= ya;
        }
};


class Player : public Entity {
    public:
        const char* Name;
        float X,Y;

        void Move(float xa, float ya){
            X+= xa;
            Y+= ya;
        }

        void PrintName(){
            std::cout << Name << std::endl;
        }

};



int main(){

    std::cout << sizeof(Entity) << std::endl;
    Player player;
    player.Move(5,5);
    player.X = 2;
    player.Y = 5;
    std::cout << sizeof(Player) << std::endl;


    // player.PrintName("Player unknown battle ground");
    // std::cin.get();
    return 0;
}