/***************************************************************************************/ 
/*             Name                : Classes_OOPS.cpp                                  */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 02-Jun-2021 12:03:10 AM                           */
/***************************************************************************************/

#include <iostream>
using namespace std;

#define LOG(x) std::cout << x << std::endl


//create a player class ex: for a game, with x & y attributes for his position along with speed
 class Player{

    public:
        int Pos_x,Pos_y;
        int speed;

    //create a move function to move the player by a given amount
    void Move(int xa, int ya, int speed){
        Pos_x += xa * speed;
        Pos_y += ya * speed;
    }

};

// void Move(Player& playerA, int xa, int ya, int speed){
//     playerA.Pos_x += xa * playerA.speed;
//     playerA.Pos_y += ya * playerA.speed;
// }


int main(){

    Player playerA; //create a player type object and instantiate
    
    //print values before moving
    LOG(playerA.Pos_x);
    LOG(playerA.Pos_y);
    playerA.Move(1, -1, 10);

    LOG(playerA.Pos_x);
    LOG(playerA.Pos_y);

    // std::cin.get();
    return 0;
}