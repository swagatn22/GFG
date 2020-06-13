#include<bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, int m, int n){
    vector<vector<int>>dp(m+1,vector<int>(n+1));
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if (s1[i-1] == s2 [j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main()
 {
     int x,y;
     int t;
     string s1,s2;
     cin>>t;
     while(t--){
         cin>>x>>y;
         cin>>s1>>s2;
         int m = s1.length();
         int n = s2.length();
         int len = LCS(s1,s2,m,n);
         int val1 = (m-len)*x;
         int val2 = (n-len)*y;
         cout<<val1+val2<<endl;
     }
	//code
	
	return 0;
}
