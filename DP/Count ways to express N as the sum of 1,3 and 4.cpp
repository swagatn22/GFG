#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long int dp[n];
	    dp[0] = 1;
	    dp[1] = 1;
	    dp[2] = 2;
	    dp[3] = 4;
	    for(int i = 4; i < n; i++){
	        dp[i] = (dp[i-1]  + dp[i-3]  + dp[i-4])%1000000007;
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}
