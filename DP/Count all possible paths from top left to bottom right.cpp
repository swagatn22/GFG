//Bottom_up
#include <bits/stdc++.h>
using namespace std;
int solve(int i, int j, int m, int n,vector<vector<int>>&dp){
    if(i >= m || j >= n)
        return 0;
    if(i == m-1 && j == n-1)
        return 1;
    if(dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = (solve(i+1,j,m,n,dp) + solve(i,j+1,m,n,dp))%1000000007;
}

int main() {
	int t;
	cin>>t;
	int m,n;
	while(t--){
	    cin>>m>>n;
	    vector<vector<int>>dp(m,vector<int>(n,-1));
	    cout<<solve(0,0,m,n,dp)<<endl;
	}
	return 0;
}
//top_down

int solve(int i, int j, int m, int n,vector<vector<int>>&dp){
    for(int i = 0;i < n; i++){
        dp[0][i] = 1;
    }
    for(int i = 0; i < m; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            dp[i][j] = (dp[i][j-1]+dp[i-1][j])%1000000007;
        }
    }
    return dp[m-1][n-1];
}
