//BOTTOM-UP DP

#include <bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, int m, int n,vector<vector<int>>&dp){
    if(m <= 0 || n <= 0){
        return 0;
    }
    if(dp[m][n] != -1)
        return dp[m][n];
    if(s1[m-1] == s2[n-1]){
        dp[m][n] = 1+LCS(s1,s2,m-1,n-1,dp);
    }else{
        dp[m][n] = max(LCS(s1,s2,m,n-1,dp),LCS(s1,s2,m-1,n,dp));
    }
    return dp[m][n];
}

int main() {
    int t;
    int m,n;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>m;
        cin>>n;
        cin>>s1>>s2;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        cout<<LCS(s1,s2,m,n,dp)<<endl;
    }
	//code
	return 0;
}
// TOP-DOWN
int LCS(string s1, string s2, int m, int n,vector<vector<int>>&dp){
    for(int i =  0; i <=n; i++){
        dp[0][i] = 0;
    }
    for(int i = 0; i<=m; i++){
        dp[i][0] = 0;
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
