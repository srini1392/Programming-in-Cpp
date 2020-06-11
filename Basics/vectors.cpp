/***************************************************************************************/ 
/*             Name                : vectors.cpp                                      */
/*             Author              : Srinikethan Mankala                               */
/*             Time                : 2019-10-14 14:39:56                               */
/***************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main(){


    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // std::cout << vowels[0] << "\n";
    // std::cout << vowels[1] << "\n";
    // std::cout << vowels[2] << "\n";
    // std::cout << vowels[3] << "\n";
    // std::cout << vowels[4] << "\n";

    /* Adding elements */
    std::vector<std::string> dna = {"ATG", "ACG"};
    dna.push_back("GTG");
    dna.push_back("CTG");

    /* Removing elements */
    // dna.pop_back();
    std::cout << dna[3] << "\n";






    return 0;
}