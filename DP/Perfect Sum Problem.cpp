#include <bits/stdc++.h>
using namespace std;
void solve(int n,int sum,vector<int> &A,vector<vector<int>>&dp){
    for(int i = 0; i <= sum; i++){
        dp[0][i] = 0;
    }
    for(int i = 0; i<= n; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(A[i-1] <= j){
                dp[i][j] = (dp[i-1][j-A[i-1]]+dp[i-1][j])%1000000007;
            }else{
                dp[i][j] = dp[i-1][j]%1000000007;
            }
        }
    }
}

int main()
 {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    int sum = 0;
	    for(int i = 0;i < n; i++){
	        cin>>v[i];
	    }
	    cin>>k;
	    for(int i = 0;i < n; i++){
	        sum += v[i]; 
	    }
	    vector<vector<int>>dp(n+1,vector<int>(k+1));
	    solve(n,k,v,dp);
	    cout<<dp[n][k]<<endl;
	}
	return 0;
}
