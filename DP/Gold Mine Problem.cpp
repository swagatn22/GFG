#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m,vector<vector<int>>&vec){
    int ans = 0;
    if(n == 1){
        for(int i = 0; i < m; i++){
            ans += vec[0][i];
        }
        return ans;
    }
   vector<vector<int>>dp(n,vector<int>(m));
   for(int i = 0; i < n; i++){
       dp[i][0] = vec[i][0];
   }
    for(int j = 1; j < m; j++){
        for(int i = 0; i < n; i++){
            if(i == 0){
                dp[i][j] = vec[i][j] + max(dp[i][j-1],dp[i+1][j-1]);
            }else if(i == n-1){
                dp[i][j] = vec[i][j] + max(dp[i][j-1],dp[i-1][j-1]);
            }else{
                dp[i][j] = vec[i][j] + max(dp[i][j-1],max(dp[i-1][j-1],dp[i+1][j-1]));
            }
        }
    }
    for(int i = 0; i < n; i++){
        ans = max(ans,dp[i][m-1]);
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	int n,m;
	while(t--){
	    cin>>n>>m;
	    vector<vector<int>>vec(n,vector<int>(m));
	    for(int i = 0; i< n; i++){
	        for(int j = 0; j < m; j++){
	            cin>>vec[i][j];
	        }
	    }
	   cout<<solve(n,m,vec)<<endl;
	}
	return 0;
}
