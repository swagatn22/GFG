#include <bits/stdc++.h>
using namespace std;
int LIS(int n, vector<int>vec,vector<int>&dp){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(vec[i] > vec[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}
int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i< n; i++){
	        cin>>vec[i];
	    }
	    vector<int>dp(n,1);
	    cout<<LIS(n,vec,dp)<<endl;
	}
	return 0;
}
