#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0; i < n; i++){
             cin>>vec[i];
         }
         vector<vector<int>>dp(n+1,vector<int>(n+1));
         for(int i = 0; i <= n; i++){
             for(int j = 0; j <= n; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] = 0;
                 }
                 else if( i <= j){
                     dp[i][j] = max(vec[i-1]+dp[i][j-i],dp[i-1][j]);
                 }else{
                     dp[i][j] = dp[i-1][j];
                 }
             }
         }
         cout<<dp[n][n]<<endl;
     }
	//code
	return 0;
}
