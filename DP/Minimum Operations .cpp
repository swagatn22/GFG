//Bottom_up(TLE)
int solve(int n,vector<int>dp){
    if(n <= 0){
        return INT_MAX;
    }
    if(n == 1){
        return 1;
    }
    if(dp[n] != -1){
        dp[n];
    }
    if(n % 2 == 1){
        return dp[n] = 1+ solve(n-1,dp);
    }
     return dp[n] = 1 + solve(n/2,dp);
    return dp[n];
}
//TOP-down
int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>dp(n+1);
	    dp[0] = 1;
        dp[1] = 1;
        for(int i =2; i<= n; i++){
            if(i % 2 == 1){
                dp[i] = 1 + dp[i-1];
            }else{
                dp[i] = 1 + dp[i/2];
            }
        }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
