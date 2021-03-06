#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int reverse = 0; //to store the reverse of the given number
    int remainder = 0;

    int n1 = x; //storing the original number for comparing later
    //logic to compute the reverse of a number
    while (x != 0)
    {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }

    return reverse==n1 ? true : false;

    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}