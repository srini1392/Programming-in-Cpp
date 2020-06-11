/***************************************************************************************/ 
/*             Name                : vector.cpp                                        */
/*             Description         : Write a program to find the sum of even numbers   */
/*                                   and the product of odd numbers in a vector.       */
/*             Author              : Srinikethan Mankala                               */
/*             Time                : 2019-10-14 14:39:56                               */
/***************************************************************************************/

#include <iostream>
#include <vector>


int main(){
  
  std::vector<int> num = {2,4,3,6,1,9,15,18,19};
  int sum=0;
  int product=1;

  for(int i =0; i<num.size(); i++){
    
    if(num[i]%2 == 0){
      sum = sum + num[i];
    }
    else{
      product = product * num[i];
    }
  }
  std::cout << "Sum of even numbers is " << sum << std::endl;
  std::cout << "Sum of odd numbers is " << product << std::endl;
  
  
  
  
  return 0;
}