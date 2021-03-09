





















#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[]) 
{ 
    /* Basic structure of the program is made available. The code reads the inputs and 
       stores it. This code is made available for convenience. Feel free to modify the code 
       to suit your needs 
    */
    vector<string> dict; /* Stores the words of the dictionary */
    std::string read_word; 
    
    /* Code to read the input */
    while (std::cin >> read_word)
   {
        if(read_word == "!!!EOD!!!")
            break;
        else
            dict.push_back(read_word);
   }

    string words_to_search; /* Stores the word(s) to search */
    std::cin >> words_to_search;

    /* Input read complete */
    
    bool are_words_in_dict = false; /* Use this variable to store the return value of your dictionary search */

   /* CANDIDATE CODE GOES HERE*/ 
    //compute size of dict
   int N = sizeof(read_word)/sizeof(read_word[0]);

   //compute size of searchword
   int M = sizeof(words_to_search)/sizeof(words_to_search[0]);

/*    vector<bool> multiStringSearch(string read_word, string words_to_search){

        vector<bool> solution;
        for(string words_to_search : words_to_search)
        {
            solution.push_back(isInreadWord())
        }

    }*/


    bool found = false; //flag to see if string is found
    for(int i=1;i<read_word.size();++i){ //iterate through the list
        if(read_word[i] == words_to_search[i])
            are_words_in_dict = true;
        else
            are_words_in_dict = false;
    }

/*New Try of COde
bool soln(vector<string> read_word, string words_to_search){
    size_t found = string::npos;
    string matched_word;
    for(vector<string>::iterator t=read_word.begin(); t!=read_word.end(); ++t){
        found = words_to_search.find(*t);
        if(found!= string::npos){
            matched_word = *t;
            break;
        }
    }
    if(found == string::npos){
        are_words_in_dict =  false;
    }
    else if(matched_word.size() == words_to_search.size()){
        are_words_in_dict = true;
    }
    else{
        size_t found2 = string::npos;
        string matched_word2;
        for(vector<string>::iterator t=read_word.begin(); t!=read_word.end(); ++t)      {
            if((*t).compare(matched_word)!= 0){
                found2 = words_to_search.find(*t);
                break;
            }
        }
    }
}*/

    /* The below output is in the required format. Un-comment the code once you have completed your program. */
     are_words_in_dict ? cout << "Found": cout << "Not Found"; 

    return 0; 
}