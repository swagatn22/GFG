#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     int n;
     int w;
     cin>>t;
     while(t--){
         cin>>n>>w;
         vector<int>val(n);
         vector<int>weight(n);
         for(int i = 0; i < n; i++){
             cin>>val[i];
         }
         for(int i = 0; i < n; i++){
            cin>>weight[i];
         }
         vector<vector<int>>dp(n+1,vector<int>(w+1));
         for(int i = 0; i <= n; i++){
             for(int j = 0; j <= w; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] = 0;
                 }else if(weight[i-1] <= j){
                     dp[i][j] = max(val[i-1]+dp[i][j-weight[i-1]],dp[i-1][j]);
                 }else{
                     dp[i][j] = dp[i-1][j];
                 }
             }
         }
         cout<<dp[n][w]<<endl;
     }
	//code
	return 0;
}
