#include<bits/stdc++.h>
using namespace std;
int LPS(string s1, string s2,int m){
    vector<vector<int>>dp(m+1,vector<int>(m+1));
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][m];
}
int main()
 {
     int t;
     cin>>t;
     string s;
     while(t--){
         cin>>s;
         int m = s.length();
         string rev = s;
         reverse(rev.begin(),rev.end());
         cout<<m-LPS(s,rev,m)<<endl;
     }
     
	//code
	return 0;
}
