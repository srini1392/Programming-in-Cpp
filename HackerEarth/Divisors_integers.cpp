/* F(X) = Number of divisors of integer X

You are given an array that consists of (N) integers. You are also provided (M) queries. 
There can be only one type of query, (query(l,r)). 
You are required to determine the product of all the numbers in the range from (l) to (r). 
The output can contain the values of (l) and (r). 
Your task is to print the result of function (F(X)) mod (10^9 +7 ) for that product. */


#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {

	int n, m, M = 1000000007;
	cin >> n >> m;
	vector<vector<int>> dp(n + 1, vector<int> (4, 0));
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		for(int j = 0; j < 4; j++)
			dp[i][j] = dp[i - 1][j];
		while(x % 2 == 0) {
			x /= 2;
			dp[i][0]++;
		}
		while(x % 3 == 0) {
			x /= 3;
			dp[i][1]++;
		}
		while(x % 5 == 0) {
			x /= 5;
			dp[i][2]++;
		}
		while(x % 7 == 0) {
			x /= 7;
			dp[i][3]++;
		}
	}
	while(m--) {
		int l, r;
		cin >> l >> r;
		int ans = 1;
		for(int i = 0; i < 4; i++) {
			int addon = (dp[r][i] - dp[l - 1][i] + M + 1) % M;
			ans = (ans * addon) % M;
		}
		cout << ans << "\n";
	}
}