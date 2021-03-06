#include<bits/stdc++.h>
using namespace std;

int Solve (int N, vector <int> A) {
   // Write your code 
    int currentVal = 0, closestVal=0;
    for(int i : A){
        if(A[i]<0){
            A[i] = A[0]*(-1);
        }
        currentVal = A[i] * A[i];
        if(currentVal <= (closestVal * closestVal))   
            closestVal = A[i];
        }
        return closestVal;
}

int Solve (int N, vector <int> A) {
   // Write your code 
   int res = A[0];
   for(int i=1; i< A.size(); i++){
       if(A[i] < 0){
           A[i] *= (-1);
       }
        res = min(res,A[i]);
       }
    return res;
}



int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector <int> A(N);
    for (int a_i = 0; a_i < N; ++a_i) {
        cin >> A[a_i];
    }
    int out = Solve(N, A);
    cout << out << "\n";
}