#include <bits/stdc++.h>
using namespace std;
int LPS(string s1, string s2, int m, int n,vector<vector<int>>&dp){
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

int main() {
    int t;
    int m,k;
    string s;
    cin>>t;
    while(t--){
        cin>>m;
        cin>>k;
        cin>>s;
        string rev = s;
        int num;
        reverse(rev.begin(),rev.end());
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        num = s.length()-LPS(s,rev,m,m,dp);
        k >= num ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
	//code
	return 0;
}
