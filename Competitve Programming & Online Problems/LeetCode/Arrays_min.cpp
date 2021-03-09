// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;


/*You have an array arr of length n where arr[i] = (2 * i) + 1 for all valid values of i (i.e. 0 <= i < n).

In one operation, you can select two indices x and y where 0 <= x, y < n and subtract 1 from arr[x] 
and add 1 to arr[y] (i.e. perform arr[x] -=1 and arr[y] += 1). 
The goal is to make all the elements of the array equal. It is guaranteed that all the elements of the array can be made equal using some operations.

Given an integer n, the length of the array. Return the minimum number of operations needed to make all the elements of arr equal.

 

Example 1:

Input: n = 3
Output: 2
Explanation: arr = [1, 3, 5]
First operation choose x = 2 and y = 0, this leads arr to be [2, 3, 4]
In the second operation choose x = 2 and y = 0 again, thus arr = [3, 3, 3]. */

class Solution {
public:
    int minOperations(int n) {
        int arr[n];
        for(int i=0;i<n;++i){
            arr[i] = (2*i)+1;
        }
        int mid = arr[n/2];
        int cost = 0;
        
        for(int i=0;i<n;i++){
            cost+=abs(arr[i]-mid);
        }
        return cost/2;
    }
};

/* fastest solution O(1) */
class Solution{
    public:
    int minOperations(int n) {
        return n*(n/2) - (n/2)*(n/2);
    }
};

class Solution {
public:
    int minOperations(int n) {
    int ans = 0, 
    sumupto = n/2;
    if(n&1){
        ++sumupto; //odd
        ans = sumupto*(sumupto-1);
    }
    else{
        ans = sumupto*sumupto; //even
    }
    return ans;
    }
};



