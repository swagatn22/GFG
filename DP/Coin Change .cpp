//Bottom-up
int solve(int n, vector<int>&A, int sum,vector<vector<int>>&dp){
    if(n <= 0 && sum >= 0){
        return 0;
    }
    if(n > 0 && sum == 0){
        return 1;
    }
    if(dp[n][sum] != -1){
        return dp[n][sum];
    }
    if(A[n-1] <= sum){
        dp[n][sum] = solve(n,A,sum-A[n-1],dp)+solve(n-1,A,sum,dp);
    }else{
        dp[n][sum] = solve(n-1,A,sum,dp);
    }
    return dp[n][sum];
    
}
//Top_down
int solve(int n,vector<int>&A,int sum){
    vector<vector<int>>dp(n+1,vector<int>(sum+1));
    for(int i = 1; i <= n; i++){
        dp[i][0] = 1;
    }
    for(int i = 0; i <= sum; i++){
        dp[0][sum] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(A[i-1] <= j){
                dp[i][j] = dp[i][j-A[i-1]]+dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
