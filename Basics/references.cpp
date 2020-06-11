#include <iostream>
void swap_num(int &i, int &j) {

  std::cout <<  &i << "\n";
  std::cout <<  &j << "\n";
  
  int temp = i;
  i = j;
  j = temp;


}

int main() {

  int a = 100;
  int b = 200;

  swap_num(a, b);

  std::cout << "A is " << a << "\n";
  std::cout << "B is " << b << "\n";

}