#include<bits/stdc++.h>
using namespace std;
int solve(string s, int n){
    if(s[0] == '0')return 0;
    int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
	    if(s[i-1] > '0'){
	        dp[i] = dp[i-1];
	    }
	    if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7')){
	        dp[i] += dp[i-2];
	    }
	}
	return dp[n];
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    cout<<solve(s,n)<<endl;
	}
	return 0;
}
