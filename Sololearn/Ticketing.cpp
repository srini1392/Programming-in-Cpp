#include <iostream>
using namespace std;

int findSmall(int arr[],int n){
        int temp = arr[0];
        for(int j=0; j<5 ;j++){
            if(temp > arr[j])
                temp = arr[j];
        }
        return temp;
        //cout << temp;
}

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    float discount = findSmall(ages,5);

    cout << 50 - ((discount/100)*50);

    
    return 0;