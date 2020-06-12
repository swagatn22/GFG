#include<bits/stdc++.h>
using namespace std;
int solve(int m,int n, string s1, string s2){
    vector<vector<int>>vec(m+1,vector<int>(n+1));
    for(int i= 0;i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                vec[i][j] = 0;
            }else if(s1[i-1] == s2[j-1]){
                vec[i][j] = 1 || vec[i-1][j-1];
            }else{
                vec[i][j] = vec[i-1][j]||vec[i][j-1];
            }
        }
    }
    return vec[m][n];
}
int main()
 {
     string s1,s2;
     int t;
     cin>>t;
     while(t--){
         cin>>s1>>s2;
         int m = s1.length();
         int n = s2.length();
         cout<<solve(m,n,s1,s2)<<endl;
     }
	//code
	return 0;
}
