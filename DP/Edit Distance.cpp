#include<bits/stdc++.h>
using namespace std;
// int solve(string a, string b, int n,int m,vector<vector<int>>&dp){
//     if(n == 0 || m == 0){
//         return max(n,m);
//     }
//     if(dp[n][m] != -1){
//         return dp[n][m];
//     }
//     if(a[n-1] == b[m-1]){
//         return dp[n][m] = 0 + solve(a,b,n-1,m-1,dp);
//     }else{
//         return dp[n][m] = 1 + min(solve(a,b,n-1,m,dp),min(solve(a,b,n,m-1,dp),solve(a,b,n-1,m-1,dp)));
//     }
// }
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    vector<vector<int>>dp(n+1,vector<int>(m+1));
	    //cout<<solve(s1,s2,n,m,dp)<<endl;
	    for(int i = 0; i <= n; i++){
	        for(int j = 0; j <= m; j++){
	            if(i == 0 || j == 0){
	                dp[i][j] = max(i,j);
	            }else if(s1[i-1] == s2[j-1]){
	                dp[i][j] = dp[i-1][j-1];
	            }else{
	                dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
	            }
	        }
	    }
	    cout<<dp[n][m]<<endl;
	}
	return 0;
}
