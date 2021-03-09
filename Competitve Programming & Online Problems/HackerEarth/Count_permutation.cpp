#include <bits/stdc++.h>
using namespace std;
long long int count( int S[],int m,int n ) 
{ 
    long long int table[n+1]; 
  
    // Initialize all table values as 0 
    memset(table, 0, sizeof(table)); 
  
    // Base case (If given value is 0) 
    table[0] = 1; 
  
    for(int i=0; i<m; i++) 
        for(int j=S[i]; j<=n; j++) 
            {table[j] += table[j-S[i]];
			if(table[j]>1000000009)
			 table[j]-=1000000009;} 
  
    return table[n];//%1000000009; 
} 
 
long long numberofways(int n, int m) 
{ if(n<m)
   return 0; 
  if(n<2*m)
   return 1;
  if(n==2*m)
   return 2;
  int x=n-2*m,k=0,j=0;
  int c[x]={0};
  for(int i=0;i<=x;i++)
   c[k++]=m+i;
 
  /* for(int i=0;i<k;i++)
   cout<<c[i]<<endl;
   cout<<"*"<<k;*/
 
  int d=k;
  long long int y=count(c,d,n)+1;
  return y;
}
int main(){
	int a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout << numberofways(a,b)<< endl;
	}
	return 0;
}






#include <bits/stdc++.h> 
using namespace std; 
  
// Returns number of ways 
// to reach score n 
int count(int n) 
{ 
    // table[i] will store count 
    // of solutions for value i. 
    if (n == 2) 
        return 1; 
    else if (n == 4) 
        return 2; 
    else if (n == 6) 
        return 4; 
  
    int table[n + 1], i; 
  
    // Initialize all table 
    // values as 0 
    for (i = 0; i < n + 1; i++) 
        table[i] = 0; 
  
    // Base case (If given value 
    // is 0, 1, 2, or 4) 
    table[0] = 0; 
    table[2] = 1; 
    table[4] = 2; 
    table[6] = 4; 
  
    for (i = 8; i <= n; i = i + 2) { 
  
        table[i] = table[i - 2] 
                   + table[i - 4] 
                   + table[i - 6]; 
    } 
  
    return table[n]; 
} 
  
// Driver Code 
int main(void) 
{ 
    int n = 8; 
    cout << count(n); 
  
    return 0; 
} 