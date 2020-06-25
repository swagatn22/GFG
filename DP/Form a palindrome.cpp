#include <bits/stdc++.h>
using namespace std;
int LCS(string a,string b, int m, int n){
    if(m == 0 || n == 0)
        return 0;
     vector<vector<int>>vec(n+1,vector<int>(m+1));
     for(int i = 0; i < m; i++){
         vec[i][0] = 0;
     }
     for(int j = 0; j < m; j++){
         vec[0][j] = 0;
     }
     for(int i= 1; i < m+1; i++){
         for(int j = 1; j < n+1; j++){
             if(a[i-1] == b[j-1]){
                 vec[i][j] = 1 + vec[i-1][j-1];
             }else{
                 vec[i][j] = max(vec[i-1][j],vec[i][j-1]);
             }
         }
     }
    return vec[m][n];
}

int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    string b = s;
	    int n = s.length();
	    reverse(b.begin(),b.end());
	    int len = LCS(s,b,n,n);
	    int ans = s.length()-len;
	    cout<<ans<<endl;
	}
	return 0;
}
