#include <bits/stdc++.h>
using namespace std;
void solve(string s, int n){
    vector<vector<int>>dp(n,vector<int>(n,0));
	for(int i = 0; i < n; i++){
	     dp[i][i] = 1;
	}
	int start = 0;
	int ans = 1;
	for(int i = 0; i < n-1; i++){
	     if(s[i] == s[i+1]){
	         dp[i][i+1] = 1;
	         if(start == 0){
	            start = i;
                ans = 2; 
	         }
	     }
	 }
	int j = 0;
	for(int k  = 3; k <= n; k++){
	    for(int i = 0; i < n-k+1; i++){
	        j = i+k-1;
	        if(s[i] == s[j] && dp[i+1][j-1] == 1){
	            dp[i][j] = 1;
	            if(k > ans){
	                start = i;
	                ans = k;
	            }
	       }
	   }
	}
	for(int i = start; i<= start+ans-1; i++){
	    cout<<s[i];
	}
}
int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    int n = s.length();
	    solve(s,n);
	    cout<<endl;
	}
	return 0;
}
