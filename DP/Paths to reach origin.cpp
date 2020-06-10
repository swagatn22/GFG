//Bottom-up
#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m, vector<vector<int>>&dp){
    if(n == 0 && m == 0){
        return 1;
    }
    if(n < 0 || m < 0){
        return 0;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    return dp[n][m] = solve(n-1,m,dp)+solve(n,m-1,dp);
}
int main() {
	int n;
	int m;
	int t;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
	    cout<<solve(n,m,dp)<<endl;
	}
	return 0;
}

//top-down
int solve(int n, int m, vector<vector<int>>&dp){
    for(int i = 0; i <= m; i++){
        dp[0][i] = 1;
    }
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
    return dp[n][m];
}
