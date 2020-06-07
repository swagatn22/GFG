#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>dp(n);
	    dp[0] = 1;
	    dp[1] = 2;
	    dp[2] = 4;
	    for(int i = 3; i < n; i++){
	        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	    }
	    cout<<dp[n-1]<<endl;
	}
	return 0;
}
