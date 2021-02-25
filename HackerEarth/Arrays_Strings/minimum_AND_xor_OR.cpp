/* Minimum AND xor OR
Given an array  of  integers. Find out the minimum value of the following expression for all valid i,j.
(Ai and Aj) xor (Ai or Aj), where i!=j
, where .

Input format

First line: A single integer T denoting the number of test cases
For each test case:
First line contains a single integer N, denoting the size of the array.
Second line contains N  space separated integers A1,A2,....An 

Output format
For each test case, print a single line containing one integer that represents the minimum value of the given expression */


#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int t;    
    cin>>t;

    while(t--){
        int n,f=0;
        cin>>n;

        int arr[n],m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(f==0){
                    m=(arr[i]^arr[j]);
                    f=1;
                }
            if((arr[i]^arr[j])<m)
                m=(arr[i]^arr[j]);
            else
                break;
        }
    }
    cout<<m<<"\n";
    }

}