#include<bits/stdc++.h>
using namespace std;
//bottom-up
// int search(unordered_map<string,int>&m, string s, unordered_map<string,int>&dp){
//     if(s == ""){
//         return 1;
//     }
//     if(dp.find(s) != dp.end()){
//         return true;
//     }
//     for(int i = 1; i <= s.length(); i++){
//         if(m.find(s.substr(0,i)) != m.end() && search(m,s.substr(i,s.length()),dp)){
//             dp[s] = 1;
//             return 1;
//         }
//     }
//     dp[s] = 0;
//     return 0;
// }
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string dict,s;
	    vector<string>v(n);
	    unordered_map<string,int>m;
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    for(int i = 0; i < n; i++){
	        m[v[i]]++;
	    }
	    cin>>s;
	    //cout<<search(m,s,dp)<<endl;
	    int n = s.length();
	    int dp[n+1] = {0};
	    dp[0] = 1; 
	    for(int i = 1; i <= n; i++){
	        for(int j = 0; j < i; j++){
	            if(dp[j] && m.find(s.substr(j,i-j)) != m.end()){
	                dp[i] = 1;
	                break;
	            }
	        }
	    }
	    cout<<dp[n]<<endl;
	}
	return 0;
}
