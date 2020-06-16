#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         string s;
         cin>>s;
         string rev = s;
         reverse(rev.begin(),rev.end());
         vector<vector<int>>dp(n+1,vector<int>(n+1));
         for(int i = 0; i <= n; i++){
             for(int j = 0; j <= n; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] = 0;
                 }else if(s[i-1] == rev[j-1]){
                     dp[i][j] = 1+dp[i-1][j-1];
                 }else{
                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                 }
             }
         }
         cout<<n-dp[n][n]<<endl;
     }
	//code
	return 0;
}
