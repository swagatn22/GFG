#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>&A,int sum){
    vector<vector<int>>dp(n+1,vector<int>(sum+1));
    for(int i = 1; i <= n; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i <= sum; i++){
        dp[0][i] = INT_MAX-1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(A[i-1] <= j){
                dp[i][j] = min(1+dp[i][j-A[i-1]],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
int main() {
	//code
	int t;
	int n;
	int sum;
	cin>>t;
	while(t--){
	    cin>>sum;
	    cin>>n;
	    vector<int>A(n);
	    for(int i = 0; i< n; i++){
	        cin>>A[i];
	    }
	    int ans = solve(n,A,sum);
	    ans > sum ? cout<<-1<<endl:cout<<ans<<endl;
	}
	return 0;
}
