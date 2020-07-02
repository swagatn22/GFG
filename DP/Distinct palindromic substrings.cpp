#include<bits/stdc++.h>
using namespace std;
int LPS(string s, int n, vector<vector<int>>dp){
    int count = 0;
    unordered_map<string,int>map;
    unordered_map<char,int>m;
    for(int i = 0; i < n; i++){
        if(m.find(s[i]) == m.end()){
            count++;
            m[s[i]]++;
        }
        dp[i][i] = 1;
    }
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            dp[i][i+1] = 1;
            if(map.find(s.substr(i,2)) == map.end()){
                count++;
                map[s.substr(i,2)]++;
            }
        }
    }
    for(int k = 3; k <= n; k++){
        for(int i = 0; i < n-k+1; i++){
            int j = i+k-1;
            if(s[i] == s[j] && dp[i+1][j-1]){
                dp[i][j] = 1;
                if(map.find(s.substr(i,k)) == map.end()){
                    count++;
                    map[s.substr(i,k)]++;
                }
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
	    string s;
	    cin>>s;
	    n = s.length();
	    vector<vector<int>>dp(n,vector<int>(n));
	    cout<<LPS(s,n,dp)<<endl;
	}
	return 0;
}
