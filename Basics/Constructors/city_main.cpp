#include <iostream>
#include "city.hpp"

int main(){
    City ankara("ankara",5445000);
    std::cout << ankara.population <<std::endl;
    std::cout << ankara.name;
}