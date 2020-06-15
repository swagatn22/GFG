//top_down
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>val(n);
         for(int i = 0; i < n; i++){
             cin>>val[i];
         }
         vector<int>dp(n);
         dp[0] = val[0];
         dp[1] = max(val[0],val[1]);
         for(int i = 2; i < n; i++){
             dp[i] = max(val[i]+dp[i-2],dp[i-1]);
         }
         cout<<dp[n-1]<<endl;
     }
	return 0;
}
//Bottom-up
#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>&val,vector<int>&dp){
    if(n < 0){
        return 0;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = max(val[n]+solve(n-2,val,dp),solve(n-1,val,dp));
}
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>val(n);
         for(int i = 0; i < n; i++){
             cin>>val[i];
         }
         vector<int>dp(n+1,-1);
         cout<<solve(n-1,val,dp)<<endl;
     }
	//code
	return 0;
}
