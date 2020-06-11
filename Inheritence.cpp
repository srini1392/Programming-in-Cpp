/***************************************************************************************/ 
/*             Name                : Inheritence.cpp                                   */
/*             Author              : Srinikethan Mankala                               */
/*             Time                : 2019-12-11 16:19:36                               */
/***************************************************************************************/

#include <iostream>
using namespace std;

class A{
    int a;
    public:
        void setA(int tmp){
            this->a = tmp;
        }
}


class B: public A{
    int b;

    public:
        void setB(int tmp){
            this->b = tmp;
        }
}

// Incase of pure inheritence scenario, composition and usage are better 
//composition has better run time, but does not support virtual functions
class C {
    int b;
    A obj;

    public:
        void setB(int tmp){
            this->b = tmp;
        }
        void setA(int tmp){
            obj.a = tmp;
        }
}


int main(){

    B mainobj;
    C mainobj1;

    mainobj1.setA (10);
    return 0;
}