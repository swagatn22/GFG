#include<bits/stdc++.h>
using namespace std;
int solve(string A, string B) {
    int m = A.length();
    int n = B.length();
    vector<vector<int>>dp(m+1,vector<int>(n+1));
    for(int i = 0; i<= n; i++){
        dp[0][i] = 0;
    }
    for(int i = 0; i <= m; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(A[i-1] == B[j-1]){
                dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[m][n];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<solve(s1,s2)<<endl;
	}
	return 0;
}
