int wildCard(string pattern,string str)
{
    int n = str.length();
    int m = pattern.length();
    bool dp[n+1][m+1];
    memset(dp,false,sizeof(dp));
    dp[0][0] = 1;
    for(int i = 1; i <= n;i++){
        dp[i][0] = 0;
    }
    for(int i = 1; i <= m;i++){
        if(pattern[i-1] == '*')
            dp[0][i] = dp[0][i-1];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(pattern[j-1] == str[i-1] || pattern[j-1] == '?'){
                dp[i][j] = dp[i-1][j-1];
            }else if(pattern[j-1] == '*'){
                dp[i][j] = dp[i][j-1] || dp[i-1][j];
            }else{
                dp[i][j] = 0;
            }
        }
    }
    return dp[n][m];
}
