//Bottom-up(TLE)
#include <bits/stdc++.h>
using namespace std;
int solve(int x,int y, int n, vector<vector<int>>vec, vector<vector<int>>dp){
    if(x >= n || y < 0 || y >= n){
        return INT_MIN;
    }
    if(x == n-1){
        return vec[x][y];
    }
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    dp[x][y] = vec[x][y] + max(solve(x+1,y,n,vec,dp),max(solve(x+1,y+1,n,vec,dp),
                solve(x+1,y-1,n,vec,dp)));
    return dp[x][y];
}
int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<vector<int>>vec(n,vector<int>(n));
	    vector<vector<int>>dp(n,vector<int>(n,-1));
	    for(int i = 0; i< n; i++){
	        for(int j = 0; j < n; j++){
	            cin>>vec[i][j];
	        }
	    }
	    int ans = 0;
	    for(int i = 0; i <n; i++){
	        ans = max(ans,solve(0,i,n,vec,dp));
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
