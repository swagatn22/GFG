TLE(bottom-up)
int solve(int len,int n,vector<int>&value, vector<vector<int>>&dp){
    if(len == 0 && n != 0){
        return 0;
    }
    if(n <= 0 && len != 0){
        return INT_MIN;
    }
    if(value[n-1] <= len){
        dp[n][len] = max(1+solve(len-value[n-1],n,value,dp),solve(len,n-1,value,dp));
    }else{
        dp[n][len] = solve(len,n-1,value,dp);
    }
    return dp[n][len];
}
//TOP-DOWN
int solve(int len,int n,vector<int>&value){
    vector<vector<int>>dp(n+1,vector<int>(len+1));
    for(int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= len; j++){
        dp[0][j] = INT_MIN;
    }
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= len; j++){
            if(value[i-1] <= j){
                dp[i][j] = max(1+dp[i][j-value[i-1]], dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][len];
}
