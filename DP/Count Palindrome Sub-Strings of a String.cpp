#include<bits/stdc++.h>
using namespace std;
int LPS(string s, int n, vector<vector<int>>dp){
    for(int i = 0; i < n; i++){
        dp[i][i] = 1;
    }
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            dp[i][i+1] = 1;
            count++;
        }
    }
    for(int k = 3; k <= n; k++){
        for(int i = 0; i < n-k+1; i++){
            int j = i+k-1;
            if(s[i] == s[j] && dp[i+1][j-1]){
                dp[i][j] = 1;
                count++;
            }
        }
    }
    return count;
}
int main()
 {
	//code
	int n;
	int t;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<vector<int>>dp(n,vector<int>(n));
	    cout<<LPS(s,n,dp)<<endl;
	}
	return 0;
}
