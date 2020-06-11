//city.hpp
#include <string>

//class City --> declaration and constructor
class City{

    public:
    //member attributes
    std::string name;
    int population;

    //constructor
    City(std::string new_name, int new_pop);
};